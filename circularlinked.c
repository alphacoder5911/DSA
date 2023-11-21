#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *tail,*temp,*newnode;
int main()
{
    tail=NULL;
    int choice,x;
    do
    {
        printf("ENTER 1.CREATE\n2.display");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;
        
        default:
            break;
        }
        printf("PRESS 1 TO REPEAT");
        scanf("%d",&choice);
    }while(choice==1);
}

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA TO BE ADDED");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
        
    }
    printf("%d\n",tail->next->data);
}

void display()
{
    if(tail==NULL)
    {
        printf("NULL");
    }
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}