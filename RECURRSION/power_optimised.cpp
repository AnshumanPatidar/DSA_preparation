#include <iostream>
using namespace std;
int power(int a , int b)
{
    if(b == 0)
    return 1;

    if(b== 1)
    return a;

    int value = power(a , b/2);

    if(b%2 == 0)
      return value * value ;

    else
      return a * value *value ;
}
int main()
{
    int a;
    cin >> a ;
    int b ;
    cin >>b;
    cout << endl;
    long ans = power(a, b);
    cout << " answer is equal to " << ans ; 
    return 0;
}