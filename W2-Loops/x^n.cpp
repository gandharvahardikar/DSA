#include<iostream>
using namespace std;

int main()
{
    long long x, n;
    cin >> x >> n;
    long long ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans = ans * x;
    }
    cout << ans << endl;
}