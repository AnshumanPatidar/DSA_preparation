#include <iostream>
using namespace std;

// array should be sorted;
// total occurence of an element is also there in this solution



int first(int arr[] , int size , int key)
{
    
    
    int s = 0 ;
    int e = size - 1;

    int mid = s + (e - s)/2;
    int ans = 0;
    while(s <= e)
    {
       
       
        if(arr[mid] == key)
        {
           ans = mid;
            e = mid - 1;
        } 
           
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }     

        else if(arr[mid] > key)
        {
            e = mid - 1;

        } 
        mid = s + (e - s)/2;
        cout<< "mid " << mid << endl;
    }
    
    return ans;
    
}

int last(int arr[] , int size , int key)
{
    
    
    int s = 0 ;
    int e = size - 1;

    int mid = s + (e - s)/2;
    int ans = 0;
    while(s <= e)
    {
       
       
        if(arr[mid] == key)
        { 
            ans = mid;
           
            s = mid + 1;
        } 
           
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }     

        else if(arr[mid] > key)
        {
            e = mid - 1;

        } 
        mid = s + (e - s)/2;

    }
    
    return ans;
    
}


int main()
{
   
   
    int even[14] = {1,2,3,3,3,3,3,3,3,3,3,3,4,5};

    int firstOccurence = first(even , 14 , 3);
    int lastOccurence = last(even , 14 , 3);
   
   
    
    cout<< " the total occurence of 3 is = " << ( lastOccurence - firstOccurence) + 1;

    return 0;
}