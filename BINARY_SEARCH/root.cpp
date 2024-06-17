#include <iostream>
using namespace std;


  // i have to do this right 
  
int binarysearch(int n)
{
    int s = 0 ;
    int e = n;
    long long int mid = s + (e - s) /2;
    int ans = -1;
    while(s <= e)
    {
        if(mid * mid > n)
        {
            e = mid - 1;
        }
        if(mid*mid < n)
        {
            ans = mid;
            s= mid + 1;
        }
        if (mid * mid == n){
            return mid ;
            
        }
        mid = s + (e - s) /2;
    }
    
    return ans;
}

double morePrecise(int n , int tempsol , int pre  )
{
    double factor = 1;
    double ans = tempsol;

    for(double i = 0 ; i < pre ; i++)
    {
        factor = factor /10;
        for(double j = ans ; j * j < n ; j + factor )
        {
            ans = j;
        }
    }
   return ans;
}




int main()
{    int x ; 
     cout<< "enter the number " << endl;
     



     double temp =  binarysearch(6);
 cout<< temp ;
    cout<< " answer is " << morePrecise( x ,temp , 3 ) << endl;

     
    return 0;
}