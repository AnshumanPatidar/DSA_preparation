#include <iostream>
using namespace std;
class human
{

    protected:
     string name;
    int shade;


    public:
    int heigth;
    int weigth;
   
    public:
    void setname(string name )
    {
        this->name = name;
    }

    string getname()
    {
        return name;
    }
    
    

};
class male : public human
{
    public :
    string hair;

    void sethair(string hair)
    {
        this->hair = hair;
    }

};
int main()
{
    male m1;
     m1.setname("anshuman");
    cout<<  m1.getname();
    cout << m1.hair ;
    return 0;
}