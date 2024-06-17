#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &arr, int m)
{
     int s = 0 ; 
	 int e = m;
	 int temp = 0 ;
      for(auto i :  arr)
     {
        cout<< i <<endl;
     }cout<< endl;
	 while(s<=e)
	 {
		//  temp = arr[e-1];
		//  arr[e-1] = arr[s];
		//  arr[s] = temp;

        swap(arr[e-1] , arr[s]);
		 s++;
		 e--;
	 }
     return arr;
     
}

int main()
{
   vector<int> arr;
   arr.push_back(11);
   arr.push_back(2);
   arr.push_back(5);
   arr.push_back(7);
   arr.push_back(9);
   arr.push_back(0);
    
  vector<int> ans = reverse(arr , arr.size());

for(auto i :  ans)
     {
        cout<< i <<endl;
     }
    return 0;
}