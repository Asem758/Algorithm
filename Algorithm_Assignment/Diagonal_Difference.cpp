#include <iostream>
using namespace std;

int main()
{
  int num, D_Num1 = 0, D_Num2 = 0;
  cin >> num;

  int arr[num][num];

  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      cin >> arr[i][j];

        if (i == j)
        {
           D_Num1 = D_Num1 + arr[i][j];
        }

    }
  }

  for (int i = 0; i < num; i++)
  {
    for (int j = num - 1 - i; j >= 0;)
    {
      D_Num2 = D_Num2 + arr[i][j];
      break;
    }
  }
  cout << abs(D_Num1 - D_Num2) << endl;

  return 0;
}
