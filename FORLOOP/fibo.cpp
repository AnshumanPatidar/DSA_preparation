#include <iostream>
using namespace std;

int main()
{
    int n = 10 ;
    int a = 0 ;
    int b = 1;
    cout<< a << " " ;
    cout<< b << " " ;

   int  sum = 0;
    for (int i= 0 ; i < 10 ; i++ )
    {
        
        sum = a + b;
    
        cout<< sum << " " ;
        
        a = b;
        b = sum;
        sum = a; 


    }
    return 0;
}