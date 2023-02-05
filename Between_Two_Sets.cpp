#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int getTotalX(vector<int> a, vector<int> b)
{
    int start_arr = a[a.size()-1];
    int end = b[0];
    int counter;
    int i = start_arr;
    bool f;

    while (i <= end)
    {
        f = true;
        for (int j = 0; j < a.size(); j++)
        {
            if (i%a[j] != 0) {
                f = false;
            }
        }
        for (int k = 0; k < b.size(); k++)
        {
            if (b[k]%i != 0) {
                f = false;
            }
        }
        if (f) counter++;
        i = i + start_arr;
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nmbr_temp;
    getline(cin, nmbr_temp);

    vector<string> nmbr = split_string(nmbr_temp);

    int n = stoi(nmbr[0]);

    int m = stoi(nmbr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> a(n);

    for (int a_ite = 0; a_ite < n; a_ite++)
    {
        int it = stoi(arr_temp[a_ite]);

        a[a_ite] = it;
    }

    string arr2_temp_temp;
    getline(cin, arr2_temp_temp);

    vector<string> arr2_temp = split_string(arr2_temp_temp);

    vector<int> b(m);

    for (int b_it = 0; b_it < m; b_it++)
    {
        int it = stoi(arr2_temp[b_it]);

        b[b_it] = b_it;
    }

    int total = getTotalX(a, b);

    fout << total << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
 {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y)
    {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char del = ' ';

    size_t i = 0;
    size_t pos = input_string.find(del);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;

        pos = input_string.find(del, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
