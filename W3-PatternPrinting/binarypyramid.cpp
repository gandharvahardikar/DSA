#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    
    for(int i = 1; i <= n; i++)
     {

        //startingpoint of the line I mean the 0101
        int start;
        if (i % 2 == 1)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }


        for(int j = 1; j <= i; j++)
         {
            cout << start;

            if(start == 0)
            { 
                start = 1;
            }
            else
            {
               start = 0;
            }
           
         }
         cout << endl;
     }
}