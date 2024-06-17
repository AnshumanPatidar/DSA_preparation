#include <iostream>
using namespace std;

int main()
{
    int a , sum = 0;
    cout << " enter the size of array " << endl ;
    cin >> a;
    int arr[a];
    cout << " enter the elements " << endl;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> arr[i];
    }
     for (int i = 0 ; i < a ; i++)
     {
        sum += arr[i];
     }
     cout << " sum of the array is = " << sum ;

    
   
    
    return 0;
}