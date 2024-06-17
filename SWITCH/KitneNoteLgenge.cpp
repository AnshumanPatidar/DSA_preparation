#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"enter the Amount"<<endl;
    cin>>n;

    int hundred = n / 100;

    int fifty = (n % 100) / 50;
    
    int twenty = (n % 50) / 20;

    int ones = twenty / 1;
    
    switch(n)
    {
        default : cout<< " require " << hundred << " notes of 100" << endl ;
           
                  cout << " require " << fifty << " notes of 50" << endl ;

                  cout << " require " << twenty << " notes of 20" << endl ;

                  cout << " require " << ones << " notes of 1" << endl ;
    }
    
}