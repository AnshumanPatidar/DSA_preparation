#include <iostream>
using namespace std;
void merge(int *arr , int s , int e)
{
    
    
    int mid = s + (e - s)/2;

   
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //copying array
    int mainArrayIndex = s;
    for(int i = 0 ; i < len1; i++)
    {
        arr1[i] = arr[mainArrayIndex++];
    } 

    mainArrayIndex = mid + 1 ;
    for(int j = 0 ; j < len2 ; j++)
    {
        arr2[j] = arr[mainArrayIndex++];
    }

    // merge the two array

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s ;

    while(index1 < len1 && index2 < len2)
    {
        if(arr1[index1] < arr2[index2])
        {
            arr[mainArrayIndex] = arr1[index1];
            mainArrayIndex++;
            index1++;
        } 
        else{
            arr[mainArrayIndex] = arr2[index2];
            mainArrayIndex++ ;
            index2++;
        }
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex] = arr1[index1];
        mainArrayIndex++;
        index1++;
    }
     
    while(index2 < len2)
    {
        arr[mainArrayIndex] = arr2[index2];
        mainArrayIndex++;
        index2++;
    }
 

}




void mergeSort(int *arr , int s , int e)
{
    // basecase condition
    if(s >= e)
      return;

    int mid = s + (e - s)/2;

    // sorting the right part
    mergeSort(arr , mid + 1 , e );

    //sorting the left part
    mergeSort(arr , s , mid);

    // merge
    merge(arr , s , e);

    
}




int main()
{
    int arr[10] = { 2,5,1,6,9,1,0,5,7,6};
    int n = 10;

    mergeSort(arr , 0 , n - 1 );

    for(int i = 0 ; i < n ; i++)
   {
     cout << arr[i]  << " " ;
   }
    return 0;
}