#include <iostream>
using namespace std;
class A{
    public:
    void func()
    {
        cout << "I am func1"  << endl;
    }
};

class B {
    public:
    void func()
    {
        cout << "I am func2" << endl;
    }

};

class C : public A , public B{
    

};
int main()
{
    C c1;
    c1.A::func();
    c1.B::func();
    return 0;
}