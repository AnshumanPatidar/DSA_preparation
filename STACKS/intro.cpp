#include <iostream>
#include<stack>
using namespace std;

class stack
{
    public:

     int top;
     int *arr;
     int size;

    stack(int size){
        this -> size = size;
        top = -1;
        arr = new int[size];
    }
       
    int push(int element)
    {
          if(size - top > 1)
          {
            top++;
            arr[top] = element;
            return element ;
          }
          else
          {
            cout << "stack overflow" << endl;
            return -1;
          }
    }
    
    void pop()
    {
        if(top >= 0){
            top--;
        }
        else{
            cout<< "stack underflow" << endl;
        }
    }

    bool isEmpty(){
        if(top >=0 )
        {
            return false;
        }
        else{
            return true;
        }
    }

    int peek()
    {
        if(top == -1)
        {
            return -1;

        }
        else{
            return arr[top];
        }
    }



};


int main()
{
    
    stack st(5);

    st.push(1);
    

cout<< st.peek() << endl;
st.push(2);
 cout<< st.peek() << endl;
st.push(3);
 cout<< st.peek() << endl;
st.push(4);
 cout<< st.peek() << endl;
st.push(5);
 cout<< st.peek() << endl;
st.push(6);
 cout<< st.peek() << endl;
st.push(7);
 cout<< st.peek() << endl;
  if(st.isEmpty()) 
  {
    cout << " stack is empty" << endl;
  }
  else{
    cout << " is not empty " << endl;
  }

 st.pop();

 cout<< st.peek() << endl;
st.pop();
st.pop();
st.pop();






//     
//     //creating a stack
//     stack<int> s;

//    //push opertion
    // s.push(3);
//     s.push(4);

//     //pop
//     s.pop();

//     cout << "printing top of stack " << s.top() << endl ;

//     if(s.empty()){
//         cout << "print stack is empty" << endl;
//     }
//     else{
//        cout <<  "not empty" << endl;
//     }
//     
    


    return 0;
}