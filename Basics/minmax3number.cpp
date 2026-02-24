#include<iostream>
using namespace std;

int main()
{ 
    int a,b,c;
    cin >> a >> b >> c;



    //min
    if(a < b and a < c)
      {
        cout << "Min = " << a << endl;
      }
    else if (b < a and b < c)
      {
        cout << "Min = " << b << endl;
      }
    else
      { 
        cout << "Min = " << c << endl;
      }
  
    //max
    if(a > b and a > c)
     { 
        cout << "Max = " << a << endl;
     }
    else if( b > a and b > c)
     {
        cout << "Max = " << b << endl;
     }
     else
     {
        cout << "Max = " << c << endl;
     }

    
}