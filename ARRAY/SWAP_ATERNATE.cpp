#include <iostream>
using namespace std;

int main(){
// {   cout << "hello" ;
    int even[5]={ 1,2,3,4,5} ;
     cout<< "array" << endl;
      for(int i = 0 ; i < 5 ; i++)
     {
        cout << even[i] << endl;
     }
    for(int i = 0 ; i < 5 ; i+=2)
    {
        if(i+1 < 5){
        swap(even[i] , even[i+1]);}

    }
     cout<< "swap alternater" << endl;
     for(int i = 0 ; i < 5 ; i++)
     {
        cout << even[i] << endl;
     }
    return 0;
}