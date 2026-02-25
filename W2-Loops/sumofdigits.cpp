#include<iostream>
using namespace std;

int main()
{ 
    int sum = 0;
    long long n;
    cin >> n;

    if(n == 0)
    { 
        cout << 0;
        return 0;
    }

    while( n != 0)
    {
        sum += n%10;
        n = n/10;
    }
    cout << sum << endl;

}