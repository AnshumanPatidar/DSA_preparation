#include <iostream>
using namespace std;


// bad practice

int& update2(int n)// bad practice
{
    int b = n ; 
    int& ans = b;
    return ans;
}

// same goes with pointer , so don't use pointer and reference variable as return type

void update(int & n)// pass by value
{
    n++;
}
int main()
{
    int a = 5;
    int & b = a;
    // before
    cout << a  << " " << b << endl;

    update(a);
    //after
    cout << a  << " " << b << endl;
    update2(a);
    return 0;
}