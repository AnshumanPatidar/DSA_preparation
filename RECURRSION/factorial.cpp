#include<iostream>
using namespace std;

int factorial(int i)
{
    if(i == 0)
      return 1;

    
    int chotti = factorial(i-1);
    int badi = i * chotti;
    return badi;
}



int main()
{
    int n = 3;
    int ans = factorial(n);
   
    cout << "the factorial is equal to " << ans;
      return 0;
}