#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    bool  isPrime = 0;
    for(int i = 2 ; i < n; i++)
   {
       if(n%i == 0)
        // { cout<< n << " is not prime ";
          { 
            isPrime = 1;
         break;
         }
    }

    if(isPrime == 1)
    {
        cout<<  n << " is not a Prime ";
    }
    else
    {
        cout<< n <<" is a Prime number ";
    }



return 0;
   }
    
