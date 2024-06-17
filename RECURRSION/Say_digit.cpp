#include <iostream>
using namespace std;

void sayDigit(string *arr, int n)
{
     //base condition
     if(n == 0)
      return;

    int number = n % 10;
    n = n / 10;
    
    sayDigit(arr , n);
    cout<< " " << arr[number]  << " ";
}


int main()
{
    int n ;
    cin >> n ;
    string arr[11] = {"zero" , "one" , "two" , "three" , 
                         "four" , "five", "six",
                       "seven", "eight", "nine" , "ten"};

    sayDigit(arr , n);
    
    
    return 0;
}