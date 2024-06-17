#include <iostream>
using namespace std;
void step (int s , int d )
{
    if(s == d)
       return;
    
    cout<< " step " << s << " distination " << d << endl; 
     s++;


   

   
    
    step(s , d);
}
int main()
{
    int distination = 10;
    int start = 1;
    step(start , distination);
    return 0;
}
