#include<iostream>
using namespace std;

void CF(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << "Hello Codeforces " << i << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    CF(N);

    return 0;
}