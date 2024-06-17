#include <iostream>
using namespace std;
bool isSorted (int *arr, int n)
{
    // base case condition
    if(n == 0 || n == 1)
        return true;

    if(arr[0] > arr[1])
       return false;

    else
    {
     bool remainingPart = isSorted(arr + 1 , n - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[7] = {1,2,5,5,6,7,8};
    int n = 7;
    bool ans =isSorted(arr , n );
    cout<< ans ;
    
}