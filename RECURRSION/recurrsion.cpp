#include<iostream>
using namespace std;
void count(int a)
{
    if(a == 0){
       
        return;
    }
    count(a - 1);
    cout<< a <<endl;
    
   
}
int main()
{
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a; 
     count(a);
    
    

}