#include<stdio.h>
#include<stdlib.h>
void create_l1();
void create_l2();
void concat();
struct node
{
    int data;
    struct node *next;
};struct node *tail1,*tail2,*newnode,*temp;
int main()
{
    tail1=NULL;
    tail2=NULL;
    int choice,x;
    do
    {
        printf("ENTER 1.CREATE  LIST 1 \n2.CREATE LIST 2 \n3.CONCATIANATE AND DISPLAY ");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            create_l1();
            break;
        
        case 2: 
            create_l2();
            break;

        case 3:
                concat();
                break;
        
        default:
            break;
        }
        printf("PRESS 1 TO REPEAT");
        scanf("%d",&choice);
    }while(choice==1);
}

void create_l1()
{
     newnode=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA TO BE ADDED");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail1==NULL)
    {
        tail1=newnode;
        tail1->next=newnode;
    }
    else
    {
        newnode->next=tail1->next;
        tail1->next=newnode;
        tail1=newnode;
        
    }
}

void create_l2()
{
     newnode=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA TO BE ADDED");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail2==NULL)
    {
        tail2=newnode;
        tail2->next=newnode;
    }
    else
    {
        newnode->next=tail2->next;
        tail2->next=newnode;
        tail2=newnode;
        
    }
}

void concat()
{
    if((tail1==NULL && tail2==NULL)||(tail1!=NULL && tail2==NULL)||(tail1==NULL && tail2!=NULL))
    {
        printf("concat not possible");
    }
    else
    {
        temp=tail2->next;
        tail2->next=tail1->next;
        tail1->next=temp;
        tail1=tail2;

    

    temp=tail1->next;
    while(temp->next!=tail1->next)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    }
}
