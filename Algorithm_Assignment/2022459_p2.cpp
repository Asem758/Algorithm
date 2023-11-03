
#include<iostream>
using namespace std;
int main(){
    int a[3],b[3],count = 0,count1 = 0;
    for(int i = 0; i<3; i++){
        cin>>a[i];
    }
    for(int i = 0; i<3; i++){
        cin>>b[i];
    }
    for(int i = 0; i<3; i++){
        if(a[i]>b[i]){
            count++;
        }
        else if(a[i]<b[i]){
            count1++;
        }
        else{
            continue;
        }
    }
    cout<<count<<" "<<count1<<endl;
}
