#include <iostream>
using namespace std;
void rowsum (int arr[][3] , int row , int column )
{  
    int largest = 0;
    for(int i = 0 ; i < row ; i++)
    {
        int sum = 0 ;
        for(int j = 0 ; j < column ; j++)
        {
            sum += arr[i][j] ;
             if(sum > largest)
             largest = sum ; 
        }
        cout << "sum of the " << i <<"st row is " << sum << endl; 
        // cout << "sum of the " << i <<"st column is " << sum << endl; 
    }
    cout<< "the largest sum among them is  " << largest << endl ;
}

int main()
{
    int arr[3][3];
   
   cout << "enter the element " ;
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        { 
            cin >> arr[i][j];
        }
    }

     for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        { 
            cout << arr[i][j] << " " ;
        }
        cout<< endl;
    }
   
   rowsum(arr , 3 , 3);

    
   
    

    return 0;
}   