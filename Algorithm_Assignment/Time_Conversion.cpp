#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    string t;
    string c;

    int time;
    cin>>t;

    time = ((t[0]-'0')*10)+(t[1]-'0');

    if(t[8]=='P'&&t[9]=='M'&& time ==12)
    {
        cout << to_string(time);
    }

    else if(t[8]=='P'&&t[9]=='M')
    {
        cout<<to_string(time+12);
    }
    else if(t[8]=='A'&&t[9]=='M'&&time == 12)
    {
        cout<<"00";
    }

    else cout<< t[0]<<t[1];


    for(int i =2; i < 8; i++)
    {
         cout<<t[i];
    }

    cout<<endl;
    return 0;
}
