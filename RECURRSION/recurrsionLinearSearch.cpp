#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    cout<< "size of the array is " << size << endl;

    for(int i = 0 ; i < size ; i++)
    {
        cout<< arr[i] << " " ;
        
    }
    cout<< endl;
}
bool linearSearch(int arr[] , int n , int k)
{
    print(arr,n);


    if( n == 0)
      return false ;

    if(arr[0] == k)
      return true;

    bool remainingPart = linearSearch(arr + 1, n - 1, k);
       return remainingPart;
}
int main()

{

    int arr[14] = {1,2,3,6,7,81,2,43,4,54,5,13,16,19};
    int size = 14;
    int key;
    cout<< "Enter the number you search in the given array" << endl;
    cin >> key;
    cout << endl;

    bool ans = linearSearch(arr , size , key);
    if(ans)
    {
        cout << endl << "Present" << endl;
    }
    else
    {
        cout<< endl <<  "Absent" << endl;
    }
    
    return 0;
}