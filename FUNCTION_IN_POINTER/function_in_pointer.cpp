#include <iostream>
using namespace std;

int sum(int *arr , int n )
{
    // cout <<  " size : " << sizeof(arr) << endl;
    int sum = 0 ; 
    for(int i = 0 ; i < n ; i++ )
    {
        sum += arr[i];
    }
    return sum;
}




void update(int *p){
    *p = *p + 1;
}
void print(int *p)
{
    p = p + 1;
    cout<< p << endl;
}


int main()
{
    int value = 5;
    int *p = &value; 
    
    print(p);
    
    update(p);
    cout<< p << endl;
    cout<< *p << endl;


// when we pass an array into a function the array is not exacly passed 
// the pointer is passed ******************************************************
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
    cout << "sum of the array is " << sum(arr+7 , 3) << endl;
    
    return 0;
}