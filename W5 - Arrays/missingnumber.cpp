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
    
    int ans;
    for(int i = 0; i < n; i++)
    {
        int target = a[i];
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[j] == target)
            {
                count++;
            }
        }

        if(count == 2)
        {
            ans = a[i];
            break;
        }
    }

    cout << ans << endl;

 } 

}