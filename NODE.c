#include<stdio.h>
#include<stdlib.h>
main()
{
    struct node
    {
        int data;
        struct node *next;

    };struct node *head;// will store the datatype / address of a node called struct node.
    head=0;//initially no node is been created; and now to use or create the node malloc used;
    head=(struct node *)malloc(sizeof(struct node));
    /*above the  node of size of structure is created and the pointer to the first loc is 
     returned to head .NOTE THAT THE USE OF TYPE CASTING IS NOT NECESSARY*/
     printf("ENTER THE DATA FOR THE NODE");
     scanf("%d",&head->data);
     head->next=NULL;
     printf("%d",head->data);

     
}