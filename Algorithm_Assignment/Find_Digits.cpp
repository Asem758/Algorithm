#include <bits/stdc++.h>

  using namespace std;

  int findDigits(int n)
  {
      int remider;
      int num = n;

      int counter = 0;

      while (num != 0) {

          reminder = num%10;

          if (reminder != 0 && n%reminder == 0)
          counter++;

          num = num/10;
      }
      return counter;
  }

  int main()
  {
      ofstream fout(getenv("OUTPUT_PATH"));

      int t;
      cin >> t;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      for (int t_itr = 0; t_itr < t; t_itr++) {
          int n;
          cin >> n;
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          int result = findDigits(n);

          fout << result << "\n";
      }

      fout.close();

      return 0;
  }
