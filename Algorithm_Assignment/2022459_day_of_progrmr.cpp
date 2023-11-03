#include<iostream>
using namespace std;

int main()
{
    int n1,n2,x;
    cin>>n1;

  if( n1 < 1918)
  {
    if(n1%4 == 0)
    {
        cout<<"12.09."<< n1 <<endl;
    }
    else
    {
        x = 256-(31+28+31+30+31+30+31);
        cout<<"13.09."<< n1 <<endl;
    }
  }

  else if(n1%4 == 0 && n1%100 != 0 )
  {
        x = 256-(31+29+31+30+31+30+31+31);
        cout<<"12.09."<< n1 <<endl;
  }
    else if(n1 == 1918)
    {
        cout<<"26.09."<< n1 <<endl;
    }

   else
    {
      if(n1%400 == 0)
      {
        cout<<"12.09."<<n1<<endl;
      }
      else
      {
        x = 256-(31+28+31+30+31+30+31);
        cout<<"13.09." << n1 <<endl;
      }
    }
}
