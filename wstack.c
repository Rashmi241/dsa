
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
int stack[MAXSIZE],top=-1,ele;
int push(int ele)
{
if(top==MAXSIZE-1)
{
printf("\n stack is full:");
exit  (0);
}
stack[++top]=ele;
return 0;
}
int pop()
{ 
int ele;
if(top==-1)
{
printf("stack is empty");
return 0;
}
else
ele=stack[top--];
return ele;
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");
return;
}
printf("content of stack are:");
{
for(i=top;i>=0;i--)
printf("%d\n ",stack[i]);
return;
}
}
void main()
{
int ch,opt=1;
while(opt)
{
printf("\n1.push\n2.pop\n3.display\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
 printf("enter the element to be insert");
 scanf("%d",&ele);
 push(ele);
break;
case 2: 
 pop();
break;
case 3:
display();
break;
default:
printf("wrong choice");
exit(0); 
}
printf("\n do you want continue(0/1)");
scanf("%d",&opt);
}
}

