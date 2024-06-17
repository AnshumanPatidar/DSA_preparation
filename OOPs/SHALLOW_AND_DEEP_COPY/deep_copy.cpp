#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
    private:
    public:
    // char name[100]; bad practic

    char *name;
    int health ;
    char level;

    Hero(){
        
         name = new char[100];
    }

    //copy constructor
    Hero (Hero& temp)
    {
        char *ch = new char[strlen(temp.name)];
        strcpy(ch,temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
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

};

int main()
{
    Hero hero1;
    hero1.sethealth(70);
    hero1.setlevel('D');
    char name[9] = "anshuman";
    hero1.setname(name);

    hero1.print();

    //using copy constructor
    Hero hero2(hero1);

    cout<< endl;
    hero2.print();
    // Hero hero2 = hero1; another way to call copy constructor
 
    //let me change the name of hero1
    hero1.name[0] = 'G';
    cout<< endl;
    hero1.print();
    //printing hero2 after changing the values in hero1;
    cout<< endl;
    hero2.print();

    //hero2 content not changed 
    
    return 0;
}