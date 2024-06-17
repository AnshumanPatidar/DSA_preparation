#include <iostream>
using namespace std;
bool binarySearch(int arr[] , int s , int e , int k)
{
   //basecase condition
   if(s>e)
   {
    return false;
   }

   int mid = s + (e - s)/2;

   if(arr[mid] == k)
   {
    return true;
   }

   if(arr[mid] < k)
   {
     return binarySearch(arr, mid + 1 , e , k);
   }
   else
   {
     return binarySearch(arr , s ,mid - 1, k);
   }
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key ;
    cout << "Enter the element you want to search" << endl;
    cin >> key;
    cout<< endl;

    cout<< "Present or not (1 = yes, 0 = no) : " << binarySearch(arr , 0 , size - 1 , key);

    

    
    return 0;
}