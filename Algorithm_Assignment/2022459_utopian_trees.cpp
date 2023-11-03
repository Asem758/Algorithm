#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    for(int i = 0; i<n; i++){
         int c = 1;
        cin>>k;
        for(int j = 1; j<=k; j++){
            if(j%2 == 0){
                c++;
            }
            else{
                c = 2*c;
            }
        }
        cout<<c<<endl;
    }   
}