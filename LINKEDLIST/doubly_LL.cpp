#include <iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node* prev;
    Node* next;

    //construtor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data ;
        if( next != NULL || prev != NULL )
        {
            delete next;
            next = NULL;
            delete prev;
            prev = NULL;
           
        }
        cout << "data of the deleted node is " << value << endl;
    }
    
};

void insertAtHead(Node* &tail , Node* &head , int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

void insertAtTail( Node* & tail, Node* &head , int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp ;
        temp -> prev = tail;
        tail = temp;
    }
    
}

void insertAtPosition(Node* &head , Node* &tail , int d , int position)
{
    if(position == 1)
    {
        insertAtHead(tail ,head , d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL)
    {
        insertAtTail(tail, head , d);
        return;
    }

    Node* nodetoinsert = new Node(d);
     
    nodetoinsert -> next = temp -> next ; 

    temp -> next -> prev = nodetoinsert;

    temp -> next = nodetoinsert;

    nodetoinsert -> prev  = temp;


}

void deletionAtPosition(int position , Node* &head , Node* &tail)
{
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
         head = temp ->next;
        temp -> next = NULL;
       
        delete temp;
    }
    else
    {
       Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr  = curr -> next ;
            cnt++;
        }
        if(curr -> next == NULL)
        {
            tail = prev ;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        
        curr -> next = NULL;
    
        
        delete curr;
    }
}


void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL )
    {
        cout<< temp -> data << " " ;
        temp = temp -> next ;
    }
    cout<< endl;
}


int main()
{


   
    Node* head = NULL;
    Node* tail = NULL;

    

insertAtHead(tail , head , 20);
print(head);

insertAtHead(tail , head , 10);
print(head);

insertAtTail(tail , head , 30);
print(head);

insertAtPosition(head , tail , 40 , 3);
print(head);


deletionAtPosition(4 , head, tail );
print(head);

cout << head -> data << endl;
cout << tail -> data;
    return 0;
}