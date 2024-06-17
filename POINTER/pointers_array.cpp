#include <iostream>
using namespace std;

int main()
{
    // the name of the array show the address of the first block of the array
    int arr[10] = {2,5,10};
    cout<< "the address of the first block of the array is " << arr << endl;
    cout<< "the address of the first block of the array is " << &arr[0] << endl;
    


    //playing with pointer
    cout<< " 1st " << *arr << endl;
    cout<< " 2st " << *arr + 1 << endl;
    cout<< " 3rd " << *(arr + 1) << endl;
    cout<< " 4rd " << *(arr )+ 1 << endl;
    cout<< " 5rd " << arr[2]<< endl;
    cout<< " 6rd " << *(arr + 2)<< endl;


// special formula    *********
 // arr[i] = *(arr + i)
  // i[arr] = *(i + arr)
    


    int temp[10];
    int *ptr = temp ; 
    cout<< sizeof(temp) << endl;
    cout<< sizeof(ptr) << endl;


    int arr1[10];
    // arr = arr + 1;  give error 
    int *pot = &arr1[0];
    pot = pot +1;
    

    return 0;
}