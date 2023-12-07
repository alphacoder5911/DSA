#include<stdio.h>
#include<string.h>
#define max 5
int top=-1;
char stack[max]; 
void push(char c);
char pop();
int isbal(char a[20]);
int checkp(char x,char y);
void push(char c)
{
    if(top==max-1)
    {
        printf("stack max lim ");
    }
    else
    {
        top++;
        stack[top]=c;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("stac empty");

    }   
    else{
        return stack[top--];
    } 
}

int isbal(char a[20])
{
    int i,flag;
    char ch;
    for(i=0;a[i]!='\0';i++)
    {
    if((a[i]=='(')||(a[i]=='{')||(a[i]=='['))
    {
        push(a[i]);
    }
     if((a[i]==')')||(a[i]=='}')||(a[i]==']'))
    {
        if(top==-1)
        {
            return 0;
        }
        else
        {
                ch=pop();
                flag=checkp(ch,a[i]);
                if(flag==0)
                {
                    return 0;
                }
        }
    }
    }
    if(top==-1)
    {
     return 1;
    }
    else{
        return 0;
    }
}
int checkp(char x,char y)
{
 if(!(x=='(' && y==')'||x=='{' && y=='}'||x=='[' && y==']'))
    {
        return 0;
    }
    else
    {
         return 1;
    }
}

 main()
{
    char a[20];
    int i;
    printf("enter the expression");
    scanf("%s",a);
    int res;
    res=isbal(a);
    if(res==1)
    {
        printf("YES");
    }
    else
    {
        printf("NOPE");
    }
    

}