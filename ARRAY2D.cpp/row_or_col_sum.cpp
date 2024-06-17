#include <iostream>
using namespace std;
void rowsum (int arr[][4] , int row , int column )
{  
    
    for(int i = 0 ; i < column ; i++)
    {
        int sum = 0 ;
        for(int j = 0 ; j < row ; j++)
        {
            sum += arr[j][i] ;
             
        }
        // cout << "sum of the " << i <<"st row is " << sum << endl; 
        cout << "sum of the " << i <<"st column is " << sum << endl; 
    }
}

int main()
{
    int arr[3][4];
   
   cout << "enter the element " ;
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 4 ; j++)
        { 
            cin >> arr[i][j];
        }
    }

     for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 4 ; j++)
        { 
            cout << arr[i][j] << " " ;
        }
        cout<< endl;
    }
   
   rowsum(arr , 3 , 4);

    
   
    

    return 0;
}   