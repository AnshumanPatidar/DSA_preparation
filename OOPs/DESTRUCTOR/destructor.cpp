#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
    private:
    public:
    
    public:
    // char name[100]; bad practic

    char *name;
    int health ;
    char level;

    Hero(){
        
         name = new char[100];
    }

    

    void setname(char name[])
    {
        strcpy(this->name , name);
    }
    
    void sethealth(int health)
    {
        this -> health = health;
    }
    void setlevel(char level)
    {
        this -> level = level;
    }
    
    void print()
    {
        cout << "health " <<  health << endl;
        cout<< "name " << name << endl;
        cout<<"level "<< level << endl;
        
    }

    ~Hero()
    {
        cout<< "destructor is called" << endl;
    }

};

int main()
{
    //static declaration
    Hero hero1;
    

  //dynamic declaration
    Hero *b = new Hero;
    //destructor for a object (dynamically declared) we have to call the 
    //distructor manually
    delete b;
   
    return 0;
}