#include<iostream>
using namespace std;

 int main ()
 {
      long int  n[5],s[5]={ 0,0,0,0,0} , max=0, min;

      int i,j;

      for ( i = 0; i < 5; i++)
      {
          cin>>n[i];
      }

      for ( i = 0; i < 5; i++)
      {
          for ( j = 0; j < 5; j++)
          {
              if ( i!= j )
              {
                  s[i]=s[i]+ n[j];
              }

          }
          if ( s[i]>= max )
          {
              max=s[i];
          }

      }

        min=max;

      for ( i = 0; i < 5; i++)
      {

          if ( s[i]<= min )
          {
              min=s[i];
          }
      }

      cout << min <<" "<<max;

 }
