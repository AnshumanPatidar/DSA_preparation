#include <iostream>
using namespace std;

int main()
{
    int arr[9] = { 1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 9 ; i++)
    {
        for(int j = i+1 ; j < 9 ; j++)
        {
            if(arr[i] + arr[j] == 9)
            {
                if(arr[i] > arr[j])
                cout << arr[j] << arr[i] << endl;
                else
                cout << arr[i] << arr[j] << endl;
                
            }
        }
        
    }
    return 0;
}