#include<conio.h>
#include <stdio.h>
#include <malloc.h>

struct node 
{
    int item;
    struct node *next;
};

struct node *head=NULL;

void insert_end(int n)
{ 
    struct node *new, *ptr=head; 
    
    new=(struct node*) malloc (sizeof(struct node));
    
    new->data=n; 
    new->next=NULL; 
    if(head==NULL) 
        head=new;  
    else
    {
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=new;
    }    
}

void display()
{ 
    struct node *ptr;
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
        printf("%d->",ptr->data);
    
    printf("NULL\n");    
}

void reverse()
{
    struct node *pptr=NULL, *cptr=head, *nptr;
    
    while(cptr!=NULL)
    {
        nptr=cptr->next;
        cptr->next=pptr;
        
        pptr=cptr;
        cptr=nptr;
        
    }
    head=pptr;
}

void main()
{ 
    int I,n;

    printf("\n enter 4 values to be added");
    for(int i=1;i<=4;i++)
    {
        scanf("%d",&n);
        insert_end(n);
    }
    display();
    
    reverse();
    display();
}


