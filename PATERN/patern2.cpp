#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;

   int count = 1;
   while(row<=n)
   {
       int column = 1;
       while(column<=row)
       {
         cout<<count;
         count++;
         column++;
       } 
       cout<<endl;
       row++;
       count = row;
      

   }

    return 0;
}