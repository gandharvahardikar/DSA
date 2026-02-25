#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = n;
    while( i <= n )
    {
        if(i % 2 == 0)
        {
        cout << i << endl;
        }
    }
    i++;
}    