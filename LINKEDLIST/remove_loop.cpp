#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this ->data = data;
        this -> next = NULL;
    }
};

void insertionAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    

}

void insertionAtTail(Node* &tail , int d)
{
   Node* temp = new Node(d);
   tail -> next = temp;
   tail = temp;

}

void insertAtPosition(int position , int d, Node* &head,Node* &tail)
{

    if(position == 1)
    {
        insertionAtHead(head , d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp -> next ;
        cnt++;
    }

    if(temp -> next == NULL )
    {
        insertionAtTail(tail , d);
        return;
    }
    Node* nodetoInsert = new Node(d);

    nodetoInsert -> next = temp->next;

    temp -> next = nodetoInsert;

}



void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

Node* floyedDetectLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while ( slow != NULL && fast != NULL)
    {
        fast = fast -> next ;

        if(fast != NULL)
        {
            fast = fast -> next;
        }
        
        slow = slow -> next;

        if(slow == fast){
            // cout << "the intersection node is " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* statingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floyedDetectLoop( head);

    Node* slow = head;
   while ( slow != intersection    ){

       slow = slow -> next;

       intersection = intersection -> next;

       if(slow == intersection)
       {
        // cout << "The starting node data is " << slow -> data  << endl;
        return slow;
       }
       
   }
   return NULL;
   
}

void removeLoop(Node* head){

   if(head == NULL){
    return ;
   }
   Node* startOfLoop = statingNode( head);
   Node* temp = startOfLoop;
   while(temp -> next != startOfLoop)
   {
        temp = temp -> next;
   }

   temp -> next = NULL;

}

int main()
{

    //creation of new node
    Node* node1 = new Node(10);
   // cout<< node1 -> data << endl;
    //cout<< node1-> next << endl;
    
    Node* head = node1;
    Node* tail = node1;
    // print(head);

    insertionAtHead(head , 20);
    insertionAtTail(tail , 30); 
    insertionAtTail(tail , 40); 
    // print(head);

    // insertAtPosition(3,40,head ,tail);
    // print(head);
    
    tail -> next = head -> next  ;
    // print(head);
    // cout << "head" << " " << head -> data << endl;
    // cout << "tail" <<  " "<< tail -> data << endl;

    if(floyedDetectLoop(head) != NULL){
        cout << "loop is preseent " <<    endl;
    }
    else{
        cout<< "no loop is there" << endl;
    }

    statingNode(head);
    removeLoop(head);
    print(head);

    if(floyedDetectLoop(head) != NULL){
        cout << "loop is preseent " <<    endl;
    }
    else{
        cout<< "no loop is there" << endl;
    }
    
    return 0;
}