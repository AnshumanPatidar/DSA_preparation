#include <iostream>
#include<queue>
using namespace std;

class node{

   public:

   int data;
   node* left;
   node* right;

   node(int data){

      this -> data  = data;
      this -> left = NULL;
      this -> right = NULL;
   }



} ;

 
node* buildTree(node* root){
  
    cout << " enter the data " << endl;
    
    int data;
    cin  >> data ;
    
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << " enter the data in the left node of " << root -> data << endl;
    root -> left = buildTree(root -> left);
    cout << " enter the data in the right node of " << root -> data << endl;
    root -> right = buildTree(root -> right);

   return root;
}

void leverOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
           
           cout << endl;
         
           if(!q.empty())
           {
             q.push(NULL);
           }
           
        }
       
        
       
         else{
            cout << temp -> data  << " " ;

            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right ){

                q.push(temp -> right);
            }
       }

}
}

void inOrderTraversal (node* root){
    // LNR  left / print the node / right
    // base case
    if(root == NULL){
        return ;
    }

    // going left 
    inOrderTraversal(root -> left);
    cout << root -> data << " " ;
    inOrderTraversal(root -> right);


}

void preOrderTraversal(node* root){
    //NLR 
    // print / left / right
    // base case
    if(root == NULL)
    {
        return ;
    }

    cout<< root -> data << " " ;
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
    
}

void postOrderTraversal(node* root ){
    // LRN 
    // left / right / print

    // base case
    if(root == NULL){
        return ;
    }

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data  << " " ;
}


int main()
{
    node* root = NULL;

    root = buildTree(root);

    cout << "printing the tree" << endl;

    leverOrderTraversal(root);

    cout<< " inOrderTraversal " << endl;

    inOrderTraversal(root);

    cout << endl;

    cout << " preOrderTraversal " << endl;
    preOrderTraversal(root);

    cout << endl;

    cout << " postOrderTraversal" << endl;
    postOrderTraversal(root);

    return 0;
}