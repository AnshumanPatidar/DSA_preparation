#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    int i = 1;
   
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            //formula is i+j-1 if we take number in place of alphabate
            //for example i+j-1 (where i=1 and j=1)  = 1
            //but we want alphabate 
            //i+j-1 + 'A' -1 = 1+ 'A' -1 
            //'A' + i+j -2 = 'A'
             char ch = 'A' +i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}