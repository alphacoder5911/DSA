#include<stdio.h>
#include<stdlib.h>
void delete_front();
void delete_end();
void delete_loc();
void insert();
void display();
struct node
{
    int data;
    struct node *next;

};struct node *head,*temp,*newnode;
main()
{
    int x,choice;
    head=NULL;
    do
    {
        printf("ENTER 1.INSERTION NORMAL\n2.DELETE AT START\n3.DELETE AT END\n4.DELETE AT A LOC\n5.DISPLAY");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
              insert(); /* constant-expression */
            /* code */
            break;
        case 2:
                delete_front();
                break;
        case 3:
                delete_end();
                break;
                
        case 4:
                delete_loc();
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

void insert()
{
newnode=(struct node *)malloc(sizeof(struct node));
    printf("ETNER THE DATA U WANT TO INSERT ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }

}
void delete_front()
{
    if(head==NULL)
    {
        printf("no node to delete");

    }
    else
    {
        temp=head;
        head=temp->next;
        free(temp);
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

void delete_end()
{
    if(head==NULL)
    {
        printf("EMPTY LL");
    }
    else
    {
        struct node *prev;
        temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);


    }
}

void delete_loc()
{
        struct node *supnext;
    int pos,i=0;
    temp=head;
    printf("ENTER THE POSITION YOU WANT TO DELETE");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("linked list empty");
    }
    else
    {
            if(pos==1)
            {
                temp=head;
                head=temp->next;
                free(temp);
            }
            else{
                while(i!=pos-1)
                {
                    temp=temp->next;
                    i++;
                }
                supnext=temp->next;
                temp->next=supnext->next;
                free(supnext);

            }
    }
}