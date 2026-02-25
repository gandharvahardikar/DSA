#include<iostream>
using namespace std;

int main()
{
    long long rev = 0;
    long long n;
    cin >> n;
    
    long long temp = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n /10;

    }
    if ( rev == temp)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}