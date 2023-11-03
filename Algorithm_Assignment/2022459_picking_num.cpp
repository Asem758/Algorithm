#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    int max = 0,count = 0,f,z=0;
    sort(arr,arr+num);

    for(int i=0; i<num; i++)
    {
    	count = 0;
    	for(int j=i+1; j<num; j++)
    	{
            if(abs(arr[i]-arr[j]) <=1)
            {
                count++;
                if(count>z)
                      {
			     	      z = count;
			          }
            }

            else
            {
                count = 0;
            	break;
			}
		}
    }
    cout<<z+1<<endl;
    return 0;
}
