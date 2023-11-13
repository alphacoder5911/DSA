#include<stdio.h>
#include<stdlib.h>
void insert_norm();
void insert_strt();
void insert_end();
void insert_loc();
void display();
struct node
{
    int data;
    struct node *next;
};struct node *head,*newode,*temp;
 main()
{
    int x,choice;
    head=0;
    do
    {
        printf("ENTER 1.INSERTION NORMAL\n2.INSERT AT START\n3.INSERT AT END\n4.INSERT AT A LOC\n5.DISPLAY");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
              insert_norm(); /* constant-expression */
            /* code */
            break;
        case 2:
                insert_strt();
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
    printf("do you want to perform the above ops again press 1 if yes");
    scanf("%d",&choice);
    } while (choice==1);
    
    

    return 0;
}

void insert_norm()
{
newode=(struct node *)malloc(sizeof(struct node));
    printf("ETNER THE DATA U WANT TO INSERT ");
    scanf("%d",&newode->data);
    newode->next=NULL;
    if(head==0)
    {
        head=temp=newode;
    }
    else{
        temp->next=newode;
        temp=newode;
    }

}

void insert_strt()
{
    newode=(struct node *)malloc(sizeof(struct node));
    printf("ETNER THE DATA U WANT TO INSERT ");
    scanf("%d",&newode->data);
    newode->next=head;
    head=newode;
}

void insert_end()
{
    newode=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF THE NODE ");
    scanf("%d",&newode->data);
    newode->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=temp=newode;

    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newode;
        newode->next=NULL;
    }
}
void insert_loc()
{
    int pos,i=0;
    newode=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA FOR THE NODE \n");
    scanf("%d",&newode->data);
    newode->next=NULL;
    printf("ENTER THE POSITION YOU WANT TO ENTER THE ELEMENT IN ");
    scanf("%d",&pos);
    if(head==NULL)
    {
        head=temp=newode;
    }
    else
    {
        temp=head;
        if(pos==1)
        {
            newode->next=head;
             head=newode;
        }
        else
        {
        while(i!=pos-1)
        {
           temp=temp->next;
           i++;

        }
        newode->next=temp->next;
        temp->next=newode;
        
        }
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