#include<stdio.h>
#include<stdlib.h>
void insert_normal();
void delete_start();
void delete_end();
void delete_loc();
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
            delete_start();
            break;
        
       /* case 3:
            delete_end();
            break;
        
        case 4:
            delete_loc();
            break;
*/
        case 3:
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

void delete_start()
{
    if(head==NULL)
    {
        printf("THERE ARE NO NODES");
    }
    else
    {
        temp=head;
        temp=head=temp->next;
        temp->prev=NULL;
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