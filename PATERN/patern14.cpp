#include <iostream>
using namespace std;

int main()
{
    
int n;
cin>>n;
int i = 1;
while(i<=n)
{ 
    //print space
    int space = n - i ;
    while(space)
    {
        cout<<" ";
        space--;
    }
    // print number order 1
    int count = n - (n - (i - 1));
    int value = 1;
    while(count)
    {
        cout<< value;
        value++;
        count--;
    }
    //print number order 2
    // int j = 0;
    // while(j)
    // {   
    //    cout<<i;
    //    j++;
    //    if(j=n-1)
    //    {
    //     j = false;
    //    }
    // }
    cout<<endl;
    i++;
}
    return 0;
}