#include <iostream>
using namespace std;

class kQueue
{
    public:
     int freespot ;
     int *arr;
     int *next;
     int *front;
     int *rear;
     int n;
     int k;

     kQueue(int n ,int k)
     {
          this -> n = n ;
          this -> k = k ;

          freespot = 0;

          arr = new int[n];
          next = new int[n];
          front = new int[k];
          rear = new int[k];

          for(int i = 0; i < k ; i++)
          {

            front[i] = -1;
            rear[i] = -1;

          }
          for(int i = 0 ; i < n ; i++){

              next[i] = i+1;

          }
          
     }

     void enqueue(int data , int qn)
     {

        //overflow 
        if(freespot == -1)
        {
            cout << " No empty space available " << endl;
            return ;
        }

        //find first free _Index
        
        int index = freespot;

        //updata freespot

        freespot = next[index];

        //check whether first element for that queue

        if(front [qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else{
            //link the element to the prev element
            next[rear[qn-1]] = index;
        }

        //updata next

        next[index] = -1;

        //updata rear

        rear[qn- 1] = index;

        arr[index] = data;


     }

     int dequeue(int qn)
     {
        //underflow
        if(front[qn -1] == -1)
        {
            cout << " Queue Underflow" << endl;
            return -1;
        }

        //find index to pop
        
            int index = front[qn-1];

        //fornt ko aage badhao
         
         front[qn - 1] = next[index];

         //freespot lo manage karo
         next[index] = freespot;
         freespot = index;

         return arr[index];
     }



};






int main()
{
    kQueue q(10 , 3);
    q.enqueue(10 , 1);
    q.enqueue(15 , 1);
    q.enqueue(26 , 2);
    q.enqueue(20 , 1);

   cout << q.dequeue(1) << endl;
   cout << q.dequeue(2) << endl;
   cout << q.dequeue(1) << endl;
   cout << q.dequeue(1) << endl;
   cout << q.dequeue(1) << endl;
    return 0;
}