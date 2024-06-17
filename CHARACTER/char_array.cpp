#include <iostream>
using namespace std;

char toLowercase(char ch )
{
    if(ch >= 'a' && ch<='z')
    {
        return ch;
    }
    else
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
}
bool checkpalandrom(char name[] , int n )
{
    int s = 0; 
    int e = n- 1 ;
    while(s<e)
    {
       if(toLowercase(name[s++]) == toLowercase(name[e--]))
       swap(name[s] , name[e]);
       else
        return 0;
    }
    return 1;
}
void res(char name[] , int n)
{
    int s = 0;
    int e = n - 1;
    for(int i = 0 ; i < n/2 ; i++)
    {
        swap(name[s++] , name[e--]);
    }
    
}
int len(char name[])
{
    int count= 0 ;
   for(int i = 0 ; i< name[i] != '\0' ; i++ )
   {
             count++;
   }
   return count++;
}
int main()
{
    char name[20];
    cout << "enter your name " << endl;
    cin >> name ;
    cout<< "your name is " << name << endl;
    int length = len(name);
    cout << "length of the char array is " << length << endl;
    res(name, length);
    cout<< "your name in reverse is " << name << endl;
    cout<< "this char array is palandrom or not " << checkpalandrom(name, length) << endl;

    return 0;
}