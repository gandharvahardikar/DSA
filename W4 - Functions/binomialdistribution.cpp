#include<iostream>
using namespace std;

//this is the block of code of a function which can be used anywhere
int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= 1;
    }
}

int main()
{
    int n, r;
    cin >> n >> r;
    
    //n!
    int nFact = factorial(n);

    //r!
    int rFact = factorial(r);

    //(n-r)!
    int nrFact = factorial(n-r);

    cout << nFact / (rFact * nrFact) << endl;

}