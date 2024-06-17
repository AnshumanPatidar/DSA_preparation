#include<iostream>
using namespace std;

int sum (int arr[] , int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int remainingPart = sum(arr+1 ,  size -1);
    int sum = arr[0] + remainingPart;
    return sum;
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
     sum(arr, size);
    cout<<sum(arr,size)<<endl;

}