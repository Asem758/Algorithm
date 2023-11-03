#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int changes;
    for (int i = 0; i < (n-1); i++) {
        changes = 0;

        for (int j = 0; j < (n-1); j++) {
            int val1 = arr[j];

            if (val1 > arr[j + 1]) {
                arr[j] = arr[j + 1];
                arr[j + 1] = val1;
                changes++;
            }
        }

        if (changes == 0) break;
    }

    vector<int> cutsPerRound;

    while (n > 0) {

        int numCut = arr.size();

        int shortStick = arr.front();

        arr.erase(arr.begin());

        n = arr.size();

        for (int i = 0; i < n; i++) {
            arr[i] -= shortStick;

            if (arr[i] == 0) {
                arr.erase(arr.begin() + i);
                n = arr.size();
                i--;
            }
        }
        cutsPerRound.push_back(numCut);
    }

    for (int i = 0, n = cutsPerRound.size(); i < n; i++)
        cout << cutsPerRound[i] << endl;
    return 0;
}
