#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define stack_size 4
int s[20];
int top;
int i,item;
void push(int item)
{
    if(top==stack_size-1)
    {
        printf("overflow\n");
        return;
    }
top=top++;
s[top]=item;
}

int pop()
{
    if(top==-1)
return -1;
return s[top--];
}

void display()
{
    int i;
    if(top==-1)
    {
        printf(stack is empty);
        return;
    }
    for(i=0;i<=top;i++)
    printf("%d",s[i]);
    }
    void main()
    {
        int item_deleted;
        int choice;
        int item;
        top=-1;
        for(;;)
{
    printf("1.push 2.pop 3.display 4.exit");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("enter the number to be inserted\n");
                scanf("%d"&item);
                push(item);
                break;
          
        case 2: pop()
                break;
        case 3: display()
                break;
        default : exit(0)
                           }
}
    }
