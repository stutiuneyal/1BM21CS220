#include<stdio.h>
#include<conio.h>
#define SIZE 3
int STACK[SIZE],TOP=-1,ITEM;
void push();
void pop();
void display();

void main()
{ int choice;
    while(1)
    {
        printf("\n\n 1:push\n 2:pop\n 3:display\n 4:exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
    {
        case 1:push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default: printf("wrong choice");

    }
    }
    getch();
}
void push()
{
    if(TOP==SIZE-1)
    {
        printf("stack overflow");
        return;
    }
    else
    {
        printf("enter an element\n");
        scanf("%d",&ITEM);
        printf("entered element is %d\n\n",ITEM);
        TOP=TOP+1;
        STACK[TOP]=ITEM;
    }
}
void pop()
{
    int del;
    if(TOP==-1)
    {
        printf("stack underflow\n");
        return;
    }
    else
    {
        del=STACK[TOP];
        printf("poped element is %d\n",del);
        TOP=TOP-1;
    }
}
void display()
{
    int i;
if(TOP==-1)
{
printf("STACK IS EMPTY\n");
return;
}
else
{
    for(i=TOP;i>=0;i--)
    {
        printf("%d\n",STACK[i]);
    }
}
}

 

