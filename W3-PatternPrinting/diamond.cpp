#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // for spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

       for(int j = 1; j <= i; j++)
       {
        if( i == 1 or j == 1 or j == i)
        {
         cout << "* ";
        }
        else
        {
          cout << "  ";
        }
     
         
       }
    cout << endl;
    }

    //prints n to 1
    for(int i = n-1; i >= 1; i--)
    {
        // for n - 1 spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

       for(int j = 1; j <= i; j++)
       {
        if( i == 1 or j == 1 or j == i)
        {
         cout << "* ";
        }
        else
        {
          cout << "  ";
        }
     
         
       }
    cout << endl;
    }
}