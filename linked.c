#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;    /* data */
};struct node *head,*newnode,*temp;/*here temp is used as a substitute to head to not loose 
the link with first lis*/
main()
{
head=NULL;
int choice,COUNT=0;
do
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("ENTER THE DATA TO BE STORED ");
scanf("%d",&newnode->data);
newnode->next=0;//AS THE DATA SECTION IS DONE THE LINK IF NO NEW NODE IS FOUND WILL BE 0.
if(head==NULL)
{
    head=temp=newnode;//IF HEAD IS NULL THEN ADDRESS OF NEW NODE IS ASS TO HEAD ANND TEMP
}
else
{
    temp->next=newnode;//ADDRESS OF NEW NODE TO THE CURRRENT TEMP LINK 
    temp=newnode;/*AFTER ASSIGNMENT THE TEMP IS INCREMENTED TO THE NEWNODE AND THE LINK
    BTWN THE TWO NODES IS ESTABLISHED  */
}
printf("DO YOU WANT TO CREATE A NEW NODE PRESS 1 IF YES");
scanf("%d",&choice);
}while(choice==1);
temp=head;//CUZ AFTER ADDING ALL NODES THE TEMP STORES THE PTR OF LAST NODE 
while(temp!=NULL)//IMP:here we cannot take temp->next directly cuz we cannot compare a pointer .
{
    printf("%d\n",temp->data);
    temp=temp->next;
    COUNT++;
}
printf("THERE ARE %d NODES IN TOTAL",COUNT);
}