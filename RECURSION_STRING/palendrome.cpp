#include <iostream>
using namespace std;
bool checkPalendrome(string& str , int i , int j )
{
    //basecase
    if(i> j )
      return true;
    
    if(str[i] != str[j])
     return false;
    
    else
    return checkPalendrome(str , i+1 , j - 1);

}
int main()
{
    string str = "abba";
   bool ans =  checkPalendrome(str , 0 , str.length() - 1);
    if(ans)
    cout << "its a palendrome" ;
    else 
    cout<< "its not a palendrome" ;


    return 0;
}