//PROGRAMME TO IMPLEMENT STACK AND QUEUE USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void enqueue();
void dequeue();
void display();
struct node
{
        int data;
        struct node *next;
};
struct node *head,*tail,*top,*newnode,*temp;
main()
{
        head=NULL;
        int choice,x,y,z;
        do
        {
                printf("ENTER 1.STACT\n2.QUEUE\n");
                scanf("%d",&x);
                switch(x)
                {
                        case 1:
                                printf("ENTER 1.PUSH\n2.POP\n");
                                scanf("%d",&y);
                                switch(y)
                                {
                                        case 1: push();
                                                break;
                                        case 2: pop();
                                                break;
                                        case 3:
                                                display();
                                                break;
                                        default:
                                                       break;
                                }
                                break;
                        case 2:
                                printf("ENTER 1:ENQUEUE\n2:DEQUEUE\n");
                                scanf("%d",&z);
                                switch(z)
                                {
                                        case 1:
                                                enqueue();
                                                break;
                                        case 2:
                                                dequeue();
                                                break;
                                        case 3:
                                                display();
                                                break;
                                        default:
                                                break;
                                }
                }
        printf("DO YOU WANT TO PERFORM THE ABOVE OPS AGAIN,PRESS 1 IF YES\n");
        scanf("%d",&choice);
        }while(choice==1);

}

void push()
{
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("ENTER THE DATA YOU WANT TO INSERT \n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
                top=head=newnode;
                tail=newnode; }
        else
        {
                newnode->next=top;
                top=head=newnode;
        }
}

void pop()
{
        if(head==NULL)
        {
                printf("no linked list to delete");
        }
        else
        {
                head=top->next;
                free(top);
                top=head;
        }
}

void enqueue()
{
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("ENTER THE DATA YOU WANT TO INSERT \n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
                tail=top=head=newnode;
        }
        else
        {
                tail->next=newnode;
                tail=newnode;
        }}

void dequeue()
{
        if(head==NULL)
        {
                printf("NO NODES FOUND");
        }
        else
        {
                pop();
        }
}

void display()
{
        if(head==NULL)
        {
                printf("NO NODES PRESENT");
        }
        else
        {

        temp=head;
        while(temp!=NULL)
        {
         printf("%d",temp->data);
                temp=temp->next;
        }
        }
}
                                                          
                                                                                         