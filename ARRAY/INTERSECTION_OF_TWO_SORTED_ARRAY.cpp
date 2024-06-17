#include <iostream>
using namespace std;
//this is more complex solution 
// optimised solutions in on codestudio
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {3,4,5,6};
    int ans = 0 ;
   
   
	for( int i = 0 ; i < 5 ; i++)
	{
        
        
		for(int j = 0 ; j < 4; j++)
		{
            if(arr1[i] < arr2[j])
            {
                break;
            }
			if(arr1[i] == arr2[j]){
			  cout<< arr2[j] << " ";
              arr2[j] = -1; 
              break;}
		}
        
        
	}
    
    


    return 0;
}