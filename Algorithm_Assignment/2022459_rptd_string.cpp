#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    long long n,count = 0,rem,k,count1 = 0;
    cin >> str;
    cin >> n;
    long long len = str.length();
    rem = n%len;
    k = n/len;
    for(int i = 0; i < len; i++){
        if(str[i] == 'a'){
            count++;
        }
        if(str[i] == 'a' && i < rem){
            count1++;
        }
    }
    cout << (count*k)+count1 << endl;
}
