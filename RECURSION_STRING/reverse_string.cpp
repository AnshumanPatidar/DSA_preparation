#include <iostream>
using namespace std;

// using single pointer
void ReverseString(string& s , int i  )
{
    cout<< " the reverse call for string " << s << endl;
    
    //basecase condition
    if(i > s.length() - i - 1)
      return ;

    swap(s[i] , s[s.length() - i - 1]);
    i++;
    

    ReverseString(s , i);

    
}
int main()
{
    string s = "hui";
    ReverseString(s, 0 );
    cout<< endl ;
    cout << s ; 
    cout << endl;
    return 0;
}