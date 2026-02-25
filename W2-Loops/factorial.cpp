#include<iostream>
using namespace std;

int main()
{
    long long n, fact; // long long due to large numbers
    cin >> n;

    fact = 1; // fact = 1 because it should have some value with the input
    for(int i = 1; i <=n; i++)
    {
        fact = fact * i;
    }

    cout << fact << endl;
}