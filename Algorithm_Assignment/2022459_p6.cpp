#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    for(int i = 0; i<n; i++){
        int count = 0, temp;
        cin>>k;
        int tmp = k;
        while(tmp != 0){
            temp = tmp%10;
            tmp = tmp/10;
            if(temp != 0 && (k%temp == 0)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}