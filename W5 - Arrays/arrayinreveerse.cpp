#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i <= n; i++)
    {
        cin >> a[i];

        // prints the values we have entered in the array
    }

    for(int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}