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
     int space = n - (n - (i - 1));
     while(space)
     {
        cout<<" ";
        space--;
     }
     //print number
     
       
     int value = n - (i - 1);
     while(value)
     {
        int var = 1 + i - 1;
        cout<<var;
        value--;
     }
    cout<<endl;
    i++;


}
    return 0;
}