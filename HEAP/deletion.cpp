#include <iostream>
using namespace std;

class heap
{

  public:
   int arr[100];
   int size;


   heap()
   {    
      arr[0] = -1;
      size = 0 ;
   }


   void insert(int val){
   
      // inserting the data according to the condition of heap i.e from left to right here we insert data
      // at the last of the array 

      size = size + 1;
      int index = size;
      arr[index] = val;

      // placing the data on the right place in the heap

      while(index > 1) // jese hi index == 0 hua loop se bahr kyuki age index 0 pr aagya mtlb ki sb shi place pr h 
      {
          int parent = index / 2;

          if(arr[parent] < arr[index])
          {
            swap(arr[parent] , arr[index]);
           index = parent; 
          }
          else
            return;

      }

   }

   void print()
   {
       for(int i = 1 ; i <= size ; i++)
       {
           cout << arr[i] << " ";
       }
   }

   void deletion()
   {   
       if(size == 0)
       {
        return ;
       }

       arr[1] = arr[size];
       size--;

       int i = 1 ;
       while( i < size)
       {
           
           int leftIndex = 2 * i ;
           int rightIndex = 2 * i + 1;

           if(leftIndex <  size &&  arr[i] < arr[leftIndex] )
           {
               swap(arr[i] , arr[leftIndex]);
               i = leftIndex;
           }
           else if(rightIndex < size && arr[i] < arr[rightIndex])
           {
              swap(arr[i] , arr[rightIndex]);
              i = rightIndex;
           }
           else 
             return ;

       }
   }




};
int main()
{
      heap h;
      h.insert(50);
      h.insert(55);
      h.insert(53);
      h.insert(52);
      h.insert(54);
      h.print();

      h.deletion();
      cout << endl;
      h.print();



    return 0;
}