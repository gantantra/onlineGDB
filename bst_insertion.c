#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node search(struct node *ptr, struct node *root)
{
    if(root==NULL)
        root;
    else if(root->data < ptr->data)
        ins(ptr,root->left);
    else if(root->data > ptr->data)
        ins(ptr,root->right);
    else;    
}

void traverse(struct node *root)
{
    if(root->left==NULL)
        printf("%d ",root->data);
    else
        traverse(root->left);
        
    if(root->right!=NULL)
        traverse(root->left);    
}

void insert(int n)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=n;
    ptr->left=NULL;
    ptr->right=NULL;
    
    if(root==NULL)
        root=ptr;
    else if(root->data > ptr->data)
        search(ptr,root->left)->left=ptr;
    else if(root->data < ptr->data)
        search(ptr,root->right)->right=ptr;
    else;    
}

int main()
{
    int n,m;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m); 
        insert(m);   
    }    
   traverse(root);
}
