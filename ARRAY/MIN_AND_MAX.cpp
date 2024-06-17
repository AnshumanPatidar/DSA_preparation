#include <iostream>
using namespace std;

int main()
{
    int a; 
    cout<< " enter the size " << endl;
    cin >> a ;
    int arr[a];
    int MIN;
    int MAX ; 
    cout<< " enter the element in the array " << endl;
    for(int i = 0 ; i< a ; i++)
    {
        cin >> arr[i];
    }
    MAX = INT_MIN;
    MIN = INT_MAX;
    for(int i = 0 ; i< a; i++)
    {
        if(arr[i] < MIN)
        {
            MIN = arr[i];
        }
        if(arr[i] > MAX)
        {
            MAX = arr[i];
        }
    }
    cout << " MIN = " << MIN << endl;
    cout << " MAX = " << MAX << endl;


    return 0;
}