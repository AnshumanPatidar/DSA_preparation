#include <iostream>
#include <vector>
using namespace std;
void solve(int *nums  , int index )
{
   if(index >= sizeof(nums))
   {
      
      return ;
   }

   for(int j = index ; j < sizeof(nums)  ; j++)
   {
      swap(nums[index] , nums[j]);
      solve(nums , index  + 1 );
      // backtracking
      swap(nums[index], nums[j]);


   }


}
int main()
{
    int nums[3] = {1,2,3};
    
    int index = 0;
    solve(nums  , index);
    
    for(int i = 0 ; i < sizeof(nums) ; i++)
     {
          cout << nums[i]  << " " ; 

 
     }
    
    return 0;
}