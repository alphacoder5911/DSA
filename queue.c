#include<stdio.h>
#define max 50
int f=0,r=-1;
char q[max];
void enqueue(char qu);
void dequeue();
void disp();
main()

{
    char qu;
    int n,i,resp;
    do 
    {
    printf("ENTER \n 1.for enququing\n 2.for dequeuing\n 3.for displaying ");
    scanf("%d",&n);
    
    switch(n)
    {
    case 1:
            printf("ENTER THE ELEMENT TO BE ENTERED ");
            scanf(" %c",&qu);
            enqueue(qu);
            break;
    case 2:
            dequeue();
            break;
    case 3:
            disp();
            break;


    default:
        break;
    }

    printf("\nDO U WANT TO REPEATE ANY OF THE OPERATIONS ABOVE ?");
    scanf(" %d",&resp);
    }
    while(resp==1);
}

void enqueue(char qu)
{
    if(r==max-1)
    {
        printf("QUEUE FULL");
    }
    else if(f==0 && r==-1)
    {
        r++;
        q[r]=qu;
    }
    else    
    {
        r++;
        q[r]=qu;
    }
}

void dequeue()
{
    if(f==0 && r== -1)
    {
        printf("QUEUE EMPTY");

    }   
    else if(f==r)
    {
        printf("THE DELETED ELEMENT IS %c",q[f]);
        f=0,r=-1;
    }
    else
    {
        printf("DELETED ELEMENT IS %c",q[f]);
    }
}

void disp()
{

    int i=0;
    if(f==0 && r==-1)
    {
        printf("queue is empty");
    }
    else
    {
        while(q[i]!='\0')
        {
            printf("%c",q[i]);
            i++;
        }
    }
}