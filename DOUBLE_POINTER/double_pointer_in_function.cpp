#include <iostream>
using namespace std;

// void update(int **p2)
// {
//     //  p2 = p2 + 1;
//      // there will be no changes

//     //  *p2 = *p2 + 1; 
//      // there will be changes 

//      **p2 = **p2 + 1;
//      //there will be changes

// }
int main()
{
//     int i = 5;
//     int *p = &i ; 
//     int **p2 = &p;

//     cout << endl << "before" << endl;
//     cout << i << endl;
//     cout << p << endl;
//     cout << p2 << endl;
//     update(p2);
//     cout << endl << "after" << endl;
//     cout << i << endl;
//     cout << p << endl;  
//     cout << p2 << endl;


char arr[] = "anshu";
char *p = &arr[0];
cout << arr << " " << p[0];

    return 0;
}