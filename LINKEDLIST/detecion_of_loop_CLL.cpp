#include <iostream>
#include<map>
using namespace std;
class Node{

    public:
         int data ;
         Node* next;

         //constructor
         Node (int d){
            this -> data = d;
            this -> next = NULL;   
                  
            }

        ~Node()
        {
            int value = this -> data;
            if(this -> next == NULL )
            {
                delete next ;
                next = NULL;
            }
            cout<< "memory is free for node with data " << value << endl;
        }
};

void insertNode(Node* &tail , int element , int d)
{ // assuming that the element is present in list
    
    //is case the list is empty
    if(tail == NULL){
       Node* newNode = new Node(d);
       tail = newNode;
       newNode -> next = newNode;
    }
    else{
        //non-empty list
        // assuming that the element is present in the list
        Node* curr = tail;
        while(curr -> data != element)
        {
            curr = curr ->next;
        }
        //after loop 
        //element is found - curr is representing the element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    

}

void deleteNode(Node* &tail , int value )
{
    if(tail == NULL){
        cout << "the list is NULL please check again" << endl;
      return;
    }
    else{
        //non empty
        // assuming that "value" is present in the list

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr  = curr -> next;
        }

        
        prev -> next = curr -> next ;
        //1 node linked list
        if(curr == prev)
        {
          tail = NULL;
        }
        //>2 linked list
        else if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

void print(Node* &tail)
{
    
    Node* temp = tail;
    if(tail == NULL){
        cout << "there is no node in linked list" << endl;
        return;
    }

   do {
     
      cout << temp-> data  << " ";
      temp  = temp -> next;
   }while(tail != temp);
    cout << endl;
}

bool detectionOfLoop(Node* head)
{
    // its obvious that in a circular ll there is a loop but its real use is in SLL so it was just a trial

    
    if(head == NULL)
    {
        return false;
    }

    map<Node* , bool> visited;

    Node* temp = head;

    while(temp != NULL)
    {
        if(visited[temp] == true)
        {
            return true;
        }
        
        visited[temp] = true;
        temp = temp -> next;

    }

    return false;
    
}


int main()
{    

   Node* tail = NULL;

   insertNode(tail , 5 , 3);
   print(tail);

   insertNode(tail , 3 , 5 );
   print(tail);

//    insertNode(tail , 5 , 8 );
//    print(tail);

//    insertNode(tail , 8 , 10 );
//    print(tail);

//    insertNode(tail , 3 , 10 );
//    print(tail);

//    insertNode(tail , 10 , 11 );
//    print(tail);

//    insertNode(tail , 8 , 21 );
//    print(tail);

//    deleteNode(tail , 21);
//    print(tail);

//    deleteNode(tail , 3);
//    print(tail);

//    deleteNode(tail , 11);
//    print(tail);

//    deleteNode(tail , 3);
//    print(tail);

if(detectionOfLoop(tail))
{
    cout << "loop is present " << endl;
}
else{
    cout << " loop is not present " << endl;
}


    return 0;
}