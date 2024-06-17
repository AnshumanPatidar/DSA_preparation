#include <iostream>
#include<queue>
using namespace std;

class node
{
    public:

     int data;
     node* left;
     node* right;

     node(int data)
     {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
     }
};


node* insertIntoBST(node* root , int d)
{
   //base case
   if(root == NULL)
   {
       root = new node(d);
       return root;
   }

   if(d > root -> data)
   {
      root -> right = insertIntoBST(root-> right , d);
   }
   if(d < root -> data)
   {
      root -> left = insertIntoBST(root -> left , d);
   }


    return root ;

}

void takeInput(node* &root)
{
   int data;
   cin >> data;

   while(data != -1)
   {
       root = insertIntoBST(root , data);
       cin >> data;
   }

}
void levelordertraversal(node* root)
{
    queue<node*>  q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
       node* temp = q.front();
       q.pop();

            if(temp == NULL)
            {
                //purene level complete ho gya h 
                cout << endl;
                if(!q.empty())
                {   //if queue still has element in it
                    q.push(NULL);
                }
            }
            else{

                cout << temp -> data << " ";
                 if(temp -> left) 
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

void maxvalue(node* root )
{
    node* temp = root;
    while(temp -> right != NULL)
    {
        temp = temp -> right;
    }
    cout << "max value in bst is : "  << temp -> data << endl;
}

node* minvalue(node* root)
{
    node* temp = root ;
    while(temp -> left != NULL)
    {
        temp = temp -> left;
    }

    cout << "min value in bst is : " << temp -> data << endl;
    return temp;
}

node* deletingNode(node* &root, int key)
{
   
   if(root == NULL)
     return root;

   if(root -> data == key)
   {
       //case 1 = 0 child
       if(root -> left == NULL & root -> right == NULL)
       {
           delete root ;
           return NULL;
       }

       // case 2 = 1 child

       //left

       if(root -> left != NULL && root -> right == NULL)
       {
             node* temp = root -> left;
           delete root ;
           return temp;
       }
       //right

       if(root -> right != NULL && root -> left == NULL)
       {
           node* temp  = root -> right;
           delete root ;
           return temp;
       }

       // case 3 = 2 child

       if(root -> left != NULL && root -> right != NULL)
       {
           int mini = minvalue(root -> right) -> data;
           root -> data = mini;
           root -> right = deletingNode(root -> right , mini);
           return root;
       }



   }

   else if(root -> data < key)
   {
       root -> right = deletingNode(root -> right, key);
       return root;
   }
   
   else
   {
       root -> left = deletingNode(root -> left ,  key);
       return root;
   }
}

int main()
{
    node* root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << " Printing the BST"<< endl;
    levelordertraversal(root);

    cout<< "max value in bst" << endl;
    maxvalue(root);

    cout<< "min value in bst" << endl;
    minvalue(root);

    root = deletingNode(root , 30);
    

    cout << " Printing the BST" << endl;
    levelordertraversal(root);

    cout<< "max value in bst" << endl;
    maxvalue(root);

    cout<< "min value in bst" << endl;
    minvalue(root);
    return 0;
}