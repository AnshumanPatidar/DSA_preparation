#include <iostream>
using namespace std;
int peak (int arr[], int size)
{
    int s = 0 ; 
    int e = size - 1;

    int mid = s + (e - s)/2;
    while (s<e)
    {
        if(arr[mid] < arr[mid + 1])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s)/2;
        
    }
   
    return s;
}

int main()
{
    int arr[7]={0,1,2,3,6,9,1};
     
    int answer = peak(arr , 7);
    
    cout<< " peak value of the array is at index  = " << answer ;
    return 0;
}