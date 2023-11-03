//not accepted
#include<iostream>
using namespace std ;
 int main ()
 {
      int  num[5],num1[5], max=0, min;

      for ( int i = 0; i < 5; i++)
      {
        cin>>num[i];
      }
      for ( int i = 0; i < 5; i++)
      {
          for ( int j = 0; j < 5; j++)
          {
              if ( i!= j )
              {
                num1[i]=num1[i]+ num[j];
              }
          }
          if ( num1[i] >= max )
          {
            max = num1[i];
          }
      }
        min = max;

      for ( int i = 0; i < 5; i++)
      {
          if ( num1[i]<= min )
          {
            min=num1[i];
          }
      }
      cout<<min<<" "<<max;

 }