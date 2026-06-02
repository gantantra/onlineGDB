#include <stdio.h>

struct node
{
    int data;
    
    struct node* next;
};                                      

void insert(int n,struct node* head)
{
    struct node* ptr, pt=head;
    ptr = (struct node*) malloc (sizeof(struct node));
    ptr->data=n;
    ptr->next=NULL;
    
    while(pt->next!=NULL)
        pt = pt->next;
    
    pt->next=ptr;    
}

void traverse(struct node* head)
{
    struct node* ptr
}

int main()
{
    struct node* head=NULL;
    
    int n;
    printf("enter the number of nodes");
    scanf("%d",&n);
    
    printf("enter the value of nodes");
    for(int i=1;i<=n;i++)
        {
            int m;
            scanf("%d",&m);
            insert(m,head);
        } 
    
    traverse(head);    
}
