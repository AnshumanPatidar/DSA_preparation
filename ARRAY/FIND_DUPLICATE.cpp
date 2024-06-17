#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 1,2,3,4,1};
     
     int ans = 0;
     for(int i = 0 ; i< 5 ; i++)
     {
        ans = ans ^ arr[i];
        
        cout<< "element of the array " <<arr[i] << endl ;
        cout<< "value in answer = " << ans << endl;
     }

     for(int i = 1 ; i < 5 ; i++)
     {
        ans = ans ^ i;
        cout<< " After value of answer = " << ans << endl;
     }
    //  for(int i = 1  ; i < 5; i++)
    //  {
    //     ans = ans 
    //  }

     cout<< " final answer = " << ans << endl;

    
    
    return 0;
}