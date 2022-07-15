#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   cout << endl
        << "Pattern 1" << endl;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << i - j + 1 << ' ';
      }
      cout << endl;
   }
   cout << endl;
   cout << "Pattern 2" << endl;
   char ch = 'A';
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         cout << ch << " ";
      }
      cout << endl;
      ch++;
   }
   cout << endl;
   cout << "Pattern 3" << endl;
   char ch2 = 'A';
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         cout << ch2++ << " ";
      }
      cout << endl;
      // ch++;
   }
   cout << endl;
   cout << "Pattern 4" << endl;
   char ch3 = 'A';
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << char(ch3 + i + j) << " ";
      }
      cout << endl;
   }
   cout << endl;
   cout << "Pattern 5" << endl;
   char ch4 = 'A';
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << char(ch4 + i + j) << " ";
      }
      cout << endl;
   }
   cout << "Pattern 6" << endl;

   for (int i = 0; i < n; i++)
   {
      char ch5 = 'A' + n - i - 1;
      for (int j = 0; j <= i; j++)
      {
         cout << char(ch5++) << " ";
      }
      cout << endl;
   }

   cout << endl
        << "Pattern 7" << endl;
   for (int i = 1; i <= n; i++)
   {
      int space = n - i;
      int star = i;

      while (space--)
         cout << " ";
      while (star--)
         cout << "*";

      cout << endl;
   }
   cout << endl
        << "Pattern 7" << endl;
   for (int i = 1; i <= n; i++)
   {
      int space = n - i + 1;
      int star = i - 1;

      while (space--)
         cout << "*";
      while (star--)
         cout << " ";

      cout << endl;
   }

   cout << endl
        << "Pattern 8" << endl;
   for (int i = 1; i <= n; i++)
   {
      // FIRST ROW
      //  space
      for (int j = 1; j <= n - i; j++)
      {
         cout << " ";
      }

      // triangle 2
      for (int j = 1; j <= i; j++)
      {
         cout << j;
      }

      // triangle 3
      for (int j = i - 1; j >= 1; j--)
      {
         cout << j;
      }
      cout << endl;
      // ROW END
   }

   cout << endl
        << "Pattern 9" << endl;
   for (int i = 1; i <= n; i++)
   {
      // triangle 1
      for (int j = 1; j <= n - i + 1; j++)
      {
         cout << j << " ";
      }
      // triangle 2
      // for (int k = 0; k < i - 1; k++)
      for (int k = 0; k < i; k++)
      {
         cout << "* ";
      }
      // triangle 3
      for (int k = 0; k < i - 1; k++)
      {
         cout << "* ";
      }
      // triangle 4
      for (int j = n - i + 1; j >= 1; j--)
      {
         cout << j << " ";
      }
      cout << endl;
   }
   /* pattern
 i=1  1 2 3 4 5 5 4 3 2 1
 i=2  1 2 3 4 * * 4 3 2 1
 i=3  1 2 3 * * * * 3 2 1
 i=4  1 2 * * * * * * 2 1
 i=5  1 * * * * * * * * 1
   */
}
