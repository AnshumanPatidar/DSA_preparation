#include <iostream>
using namespace std;

int main()
{
    int i = 5; 
    int* p = &i ; 
    int** p2 = &p ;

     //...........now mujhe chahiye i ka address .........//

     cout << &i << endl;
     cout << p << endl ; 
     cout << *p2 << endl;

     //.............now mujhe chahiye i ki value .............//

     cout << i << endl;
     cout << *p << endl;
     cout << **p2 << endl;

     //.............ese tarike se apan sabki value nikal skte h .........//
     
    return 0;
}