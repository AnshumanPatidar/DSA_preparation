#include <iostream>
using namespace std;

int main()
{
    
    int a; 
    cout << " enter the size " << endl;
    cin >> a;
    int arr[a];



    cout<< "enter the elements " << endl;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < (sizeof(arr)/sizeof(int))/2 ; i++ )
    {
        int temp = 0;

        temp = arr[i];
        arr[i] = arr[(a - 1) -  i];
        arr[(a-1) - i] =  temp;

    }

    cout << " reverse array " << endl ;
    for(int i = 0 ; i < a ; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}