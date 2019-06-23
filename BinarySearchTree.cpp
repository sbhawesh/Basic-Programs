#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct BstNode {
   int data;
   BstNode* left;
   BstNode* right;
};

BstNode* createNode(int data)
{
   BstNode* newNode = new BstNode();
   newNode->data = data;
   newNode->left = NULL;
   newNode->right = NULL;
   return newNode;
}

BstNode* insertNode(BstNode* root,int data)
{
    if(root == NULL)
    {
        root = createNode(data);
    }
    else{
      if(root->data>=data)
      root->left = insertNode(root->left,data);
      else{
        root->right = insertNode(root->right,data);
      }

    }
    return root;

}

bool searchNode(BstNode* root,int data)
{
    if(root==NULL)
    {
     return false;
    }
    if(root->data==data)
    {
        return true;
    }
    else if(root->data>=data)
        {
        searchNode(root->left,data);
    }
    else{
        searchNode(root->right,data);
    }
}

void preorder(BstNode* root)
{

    if(root == NULL)
    {
       return;
    }
    cout<<root->data<<"-->";
    preorder(root->left);
    preorder(root->right);

}

int main()
{
  BstNode* root = NULL;
  root = insertNode(root,5);
  root = insertNode(root,3);
  root = insertNode(root,7);
  root = insertNode(root,1);
  root = insertNode(root,9);
  root = insertNode(root,6);
  root = insertNode(root,2);
  root = insertNode(root,4);
  bool val;
  int r;
  cout<<"enter node to find :"<<endl;
  cin>>r;
   val = searchNode(root,r);
   if(val==true)
   {
       cout<<"node found ";
   }
   else
   {
       cout<<"not found ";
   }

  preorder(root);
return 0;
}
