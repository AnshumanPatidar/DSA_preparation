#include <iostream>
using namespace std;
bool search(int arr[] , int size , int key)
{

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == key)
           return 1;
    }
   return 0;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    bool answer = search( arr , 10 , 9 );

    if(answer)
      cout << "key is present " ;
    else
      cout << " key is absent " ;  


    return 0;
}