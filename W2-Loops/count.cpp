
#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int pos = 0, neg = 0, even = 0, odd = 0;

    for(int i = 0; i < n; i++)
    {
        long long x;    
        cin >> x;

        if(x < 0)
        {
            neg++;
        }
        else if(x > 0)
        {
            pos++;
        }
        else if(x % 2 == 0)
        {
            even++;
        }
        else if(x % 2 != 0);
        {
            odd++;
        }
        
    }
    cout << pos << endl;  
    cout << neg << endl;
    cout << even << endl;
    cout << odd << endl;
    
                  
}