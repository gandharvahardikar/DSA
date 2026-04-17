#include<iostream>
using namespace std;

int main()

{
    int t;
    cin >> t;

    while(t--)
    //takes test case

 {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int c0 = 0, c1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }

    //printing 0's
    for(int i = 0; i < c0; i++)
    {
        cout << "0 ";
    }

    //printing 1's  
    for(int i = 0; i < c1; i++)
    {
        cout << "1 ";
    }
 }

}