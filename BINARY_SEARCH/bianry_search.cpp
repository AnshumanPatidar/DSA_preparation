#include <iostream>
using namespace std;


// time complexity of binary search is big O of log n ;
int binarySearch(int arr[], int size , int key)
{
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start) /2;
// there is a problem if the value of the sum of start and 
// end will be more than the range of integer than it will give
// error so for that we use formula 
// start + (end - start)/2;
// previous formula = (start + end)/2 ;
   while(start <= end)
   {
       if(arr[mid] ==  key)
       {
        return mid;
       }

       if(arr[mid] < key)
       {
          start = mid + 1;
       }
       else{
          end = mid - 1;
       }
        
        mid = (start+end)/2;

      
   }
    return -1;
}


int main()
{
    int even[6] ={1,4,8,9,22,34};
    int odd[5] ={1,4,8,9,22,};

    int evenSearch = binarySearch(even , 6 , 9);
    cout<< " the search in even array for 1 = " << evenSearch<< endl;
    int oddSearch = binarySearch(odd , 6 , 9);
    cout<< " the search in even array for 7 = " << oddSearch;

    return 0;
}