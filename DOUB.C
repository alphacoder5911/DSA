#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *temp,*head,*newnode;
main()
{
      head=NULL;
    int x,response;
    do
    {
    
    create();
    printf("ENTER 1 TO REPEAT ADDITION\n ");
    scanf("%d",&response);
    }while(response==1);
   display();
    

}

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data for the node\n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
            
           
            temp->next=newnode; 
            newnode->prev=temp;
            temp=newnode;
    }
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}