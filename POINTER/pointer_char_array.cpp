#include <iostream>
using namespace std;

int main()
{
    // this will print the address
    int arr[10] ;
    cout<< arr << endl;


    // this will print the whole string 
    char ch[10] = "abcdef";
    cout << ch << endl ;

    // even with the pointer the case with char array is same
    char *c = &ch[0];
    cout << c << endl ;

    //********************************************************************//



    // the cout function will keep printing the char untill it finds null character 
    char temp = 'z';
    char *hu = &temp;
    cout<< hu << endl;

    
    return 0;
}