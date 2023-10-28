#include<stdio.h>
#define n 50
int f=-1,r=-1;
void enqfront(char c);
void enqrear(char c);
void dqfront();
void dqrear();
void display();
char dq[n];

main()
{
    char dku;
    int x,respo;
    do
    {
    printf("enter 1:NQFRONT\n2:NQREAR\n3:DQFRONT\n4:DQREAR\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
                printf("ENTETR THE CHARECTER ");
                scanf(" %c",&dku);
                enqfront(dku);
                break;
        case 2:
                printf("ENTER THE ELEMENT TO BE EQ FORM REAR");
                scanf("%d",&dku);
                enqrear(dku);
                break;
        case 3:
                dqfront();
                break;
        case 4:
                dqrear();
                break;
        case 5:
                display();
                break;
        default:
                break;
    }
    
    printf("DO U WANT TO PERFORM THE ABOVE OPS AGAIN.IF YES PRESS 1 OR ANY OTHER INTEGER KEY");
    scanf("%d",&respo);
                
    
    }while(respo==1);
}

void enqfront(char c)
{
    int i;
    if((f==0 && r==n-1)||(f==r+1))
    {
        printf("Q BHARGAILAHAI RE MAMU");
    }
    else if(f==-1 && r==-1)
    {
        f=0,r=0;
        dq[f]=c;
    }
    else if(f==0)
    {
        f=n-1;
        dq[f]=c;

    }
    else
    {
        f--;
        dq[f]=c;
    }
}

void enqrear(char c)
{
    if((f==-1 && r==n-1)||(f==r+1))
    {
        printf("QUEUE BHARAGAYA HAI RE BABA ");

    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        dq[r]=c;
    }
    else if(r==n-1)
    {
        r=0;
        dq[r]=c;

    }
    else{
        r++;
        dq[r]=c;
    }
}

void dqfront()
{
    if(f==-1 && r==-1)
    {
        printf("KHAALI HAI RE BABA");
    }
    else if(f==r)
    {
        printf("deleted element %c",dq[f]);
        f=-1;
        r=-1;
        
    }
    else if(f==n-1)
    {
        printf("deleted element %c ",dq[f]);
        f=0;

    }
    else{
        printf("DELETED ELEMENT %c",dq[f]);
        f++;
        
    }
}

void dqrear()
{
    if(f==-1 && r==-1)
    {
        printf("queue khaali hai ");
    }
    else if(f==r)
    {
        printf("removed elemtn %c",dq[r]);
        r=f=-1;
    }
    else if(r==0)
    {
        printf("deleted element %c ",dq[r]);
        r=n-1;

    }
    else
    {
        printf("DELETED ELEMENT %c",dq[r]);
        r--;
    }
}

void display()
{
    int i=f;
    if(r==-1 && f==-1)
    {
        printf("QUEUE KHAALI HAI REEEEEEE");
    }
    else
    {
      while(i!=r)
      {
        printf(" %c ",dq[i]);
        i=(i+1)%n;
      }
      printf("%c",dq[r]);
    }
}