#include <iostream>
using namespace std;

int main()
{
    int num = 2;

    cout<< "num " << num << endl;

    // address of operator

    cout<< "address of num " << &num <<endl;

    int *ptr = &num;

    cout<< "value of ptr " << ptr << endl;
    cout<< "value of *ptr " << *ptr  << endl;

   char d = 'a';
   char *p  =  &d;

   cout<< "size of double is " << sizeof(d) << endl;
   cout<< "size of double pointer " << sizeof(p) << endl;


// pointer can be of any type but its size will be fixed either 4 or 8 in this case it is 4;




   (*ptr)++;
   cout<< "value after the increment "<<*ptr <<endl;
   *ptr = *ptr * 2;
   cout<< "value after the increment "<<*ptr << endl;


   // now pointer arthemetic 

   int a = 3; 
   int *p2 = &a;
   cout<< p2 << endl;
   p2 = p2 + 1;
   cout<< p2 << endl;

   

    return 0;
}