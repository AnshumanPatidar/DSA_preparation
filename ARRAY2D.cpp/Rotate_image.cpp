#include <iostream>
using namespace std;

int main()
{
    

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int row = 3;
    int col = 3;


    int startingRow = 0 ;
    int startingCol = 0 ;
    int endingRow = row - 1;
    int endingCol = col - 1;
    
    // int temp = arr[startingRow][startingCol];

int count = col ;
   
while(count >= 2)
{
    cout<< " count =  " << count << endl;
    // cout<< temp << " value of temp " << endl;
    //for the first colm
    for(int i = startingRow ; i <= endingRow ; i++ )
    {
       
       arr[i][startingCol] = arr[i + 1][startingCol];
    }
  
    // for last row
    for(int i = startingCol ; i <= endingCol ; i++ )
    {
       
       arr[endingRow][i] = arr[endingRow][i + 1];
    }
    
    //for last col
    for(int i = endingRow ; i >= startingRow ; i--)
    {
       arr[i][endingCol] = arr[i - 1][endingCol];
    }

     //for first row
    for(int i = endingCol ; i > startingCol ; i-- )
    {
      
       arr[startingRow][i] = arr[startingRow][i-1];
    }
 
    
   
//    cout<< startingRow++ << "  ";
//    cout<< endingCol-- << "  ";
//    cout<<endingRow-- << "  ";
//    cout<<startingCol++ << endl;

   
   count--;

  
}

// startingRow != endingCol && endingRow != startingCol

   for(int i = 0 ; i < 3 ; i++)
   {
    for(int j = 0 ; j <3 ; j++)
    {
        cout<< arr[i][j];
    }
    cout<< endl ;

   }

    return 0;
}