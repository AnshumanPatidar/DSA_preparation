#include <iostream>
using namespace std;

void merge(int *arr , int s , int e , int mid)
{
    
    int index1 = 0 ; 
    int index2 = mid + 1;
    

    int k = 0;
    while(index1 < mid && index2 < e)
    {
         if(arr[index1] < arr[index2])
         {
            k++;
            index2++;
            index1++;
         }
         else
         //arr[index1] > arr[index2]
         {
            arr[k] = arr[index2];
            index2++;
            k++;

         }
    }

             
}




void mergeSort(int *arr , int s , int e)
{
    if( s >= e)
    {
        return;
    }

    int mid = s + (e - s)/2;

// left
    mergeSort(arr , s , mid );

    // right
    mergeSort(arr , mid + 1 , e);

    merge(arr , s , e , mid);
}



int main()
{
    int arr[7] = {8,9,3,2,10,7,3};
    int n = 7;

    mergeSort(arr , 0 , n - 1);

    for(int i = 0 ; i < n ; i++)
    {
        cout<< arr[i] << " " ;
    }
    return 0;
}