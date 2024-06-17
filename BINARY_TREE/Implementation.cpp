#include <iostream>
#include<queue>
using namespace std;


class node{
   
   public:
    
    int data;
    node *left ;
    node *right;

    node(int data)
    {
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
        
        
    }

    
    

};


node* buildTree(node* root){

        cout<< "Enter the data " << endl;
        int data ;
        cin >> data ;
        root = new node(data);

        if(data == -1){
            return NULL;
        }
        

        cout << " Enter the data for inserting in left of " << data << endl;
        root -> left = buildTree(root-> left);
        cout << " Enter the data for inserting in right of " << data << endl;
        root -> right = buildTree(root -> right);

        return root;



    }

    void levelOrderTraversal(node* root){

        //using queue
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {

            node* temp = q.front();
            q.pop();
 
           if(temp == NULL)// this means the previous is completed or traversed
           {
               //purana level complete traverse ho chuka hai
               cout <<  endl;
               
               if(!q.empty()){
                //queue still has some chile nodes
                 q.push(NULL);
               }
           }
           else{
            cout << temp -> data << " ";

            if(temp-> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }

             }
        } 



    }
int main()
{
    
    node* root = NULL;
    //creating na Tree

    root = buildTree(root);

    cout << " Printing the level order tracersal output " << endl; 
    levelOrderTraversal(root);

    return 0;
}