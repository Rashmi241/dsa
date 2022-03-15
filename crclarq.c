#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int q[MAX];
int rear=-1;
int front=-1;
void display()
{
int i;
if(front==-1)
{
printf("%d\t",q[i]);
}
else
{
for(i=front;i<MAX;i++)
printf("%d\t",q[i]);
for(i=0;i<=rear;i++)
printf("%d\t",q[i]);
}
}
void enqueue(int ele)
{
rear=(rear+1)%MAX;
if(rear==front)
{
printf("queue is full");

exit(0);
}
q[rear]=ele;
if(front==-1)
front=0;
}

void dequeue()
{
int ele;
if(front==-1)
{
printf("queue is emty");
exit(0);
}
ele=q[front];
if(front==rear)
front=rear=-1;
else
front=(front+1)%MAX;
}
void main()
{
int ele,ch,op;
while(op)
{
printf("\n1.enqueue\n2.dequeue\n3.display");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter element to insert");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
}
printf("\ndo you want to continue(0/1):");
scanf("%d",&op);
}
}





