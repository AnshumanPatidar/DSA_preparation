#include <iostream>
using namespace std;




int power(int n)
{
    // base condition
    if(n == 0)
      return 1;

    // recursive relation
    int smaller = power(n - 1);
    int bigger = 2 * smaller;
    return bigger;
}
int main()
{
    int n = 10;
    int ans = power(n);
    cout << ans ;
    return 0;
}