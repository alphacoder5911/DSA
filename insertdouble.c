#include<stdio.h>
#include<stdlib.h>
void insert_normal();
void insert_start();
void insert_end();
void insert_loc();
void display();
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};struct node *temp,*head,*newnode;

main()
{
    int choice,x;
    head=NULL;
    do
    {
      printf("ENTER 1.NORM\n2.START\n3.END\n4.LOC\n5.DISPLAY");
      scanf("%d",&x);
      switch (x)
      {
        case 1:
            insert_normal();
        break;

        case 2:
            insert_start();
            break;
        
        case 3:
            insert_end();
            break;
        
        case 4:
            insert_loc();
            break;

        case 5:
                display();
                break;
      
      default:
        break;
      }  
      printf("PRESS 1 IF YOU WANT TO PERFORM THE ABOVE OPS AGAIN \n");
      scanf("%d",&choice);
    } while (choice==1);
    
    
}

void insert_normal()
{
    newnode=(struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE DATA OF THE NODE ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
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

void insert_start()
{
    newnode=(struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE DATA OF THE NODE ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp=head;
        newnode->next=head;
        temp->prev=newnode;
        head=newnode;
    }

}

void insert_end()
{
    newnode=(struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE DATA OF THE NODE ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
       }
       temp->next=newnode;
       newnode->prev=temp;
       temp=newnode;
    }
}
void insert_loc()
{
    int i=0,pos;
    newnode=(struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE DATA OF THE NODE ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("ENTER THE POSITION IN WHICH THE DATA NEED TO BE INSERTED");
    scanf("%d",&pos);
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        struct node *supnxt;
        temp=head;
        while(i!=pos-1)
        {
            temp=temp->next;
            i++;
        }
        supnxt=temp->next;
        newnode->next=temp->next;
        supnxt->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;

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