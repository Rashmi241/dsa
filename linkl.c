#include<stdio.h>
#include<stdlib.h>
typedef struct Node*lstptr;
struct Node
{
int data;
lstptr link;
};
lstptr first=NULL;
lstptr getnode() 
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}
int insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
new->link=first;
}
first=new;

}
int insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
first=new;
} 

void display()
{
lstptr temp;
if(first==NULL)
{
printf("list is emty");
return;
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}

void deleteBegin()
{lstptr temp;
if(first==NULL)
{
printf("list is emty");
return;
}
temp=first;
if(first->link==NULL)
{
first=NULL;
}
else
{
first=first->link;
}
free(temp);
}

int deleteEnd()
{lstptr temp,prev;
if(first==NULL)
{
printf("list is emty");
return;
}
temp=first;
if(first->link==NULL)
{
first=NULL;
}
else
{

while(temp->link!=NULL)
{
temp=temp->link;
prev->link=NULL;
}
free(temp);
}

int deleteSpos(int ele)
{
lstptr prev,temp;
temp=first;
if(first==NULL)
{
printf("list is emty.");
else if(first->data==ele)
}
if(first->ptr!=NULL)
{
{
first=first->ptr;
}
else 
first=NULL;}
else
{
while(temp->data!=ele && temp->ptr!=null)
{
prev=temp;
temp=temp->ptr;
}
if(temp->ptr=NULL && temp->data!=ele)
printf("specified item not found");
else if(temp->ptr!=NULL)
prev->ptr=temp->ptr;
else
prev->ptr=NULL;
}
free(temp);
return(first);
}

void main()
{
int opt,ch,ele;
while(opt)
{
printf("\n1.inert begin\n2.insert end\n3.delete Begin\n4.delete end\n5.delete specific position\n6.display");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
   printf("enter the element to be insert:");
   scanf("%d",&ele);
   insertBegin(ele);
   break;
case 2:
   printf("enter the element to be insert:");
   scanf("%d",&ele);
   insertEnd(ele);
   break;
case 6:
display();
break;
case 3:
deleteBegin();
break;
case 4:
deleteEnd();
break;
case 5:
printf("enter element to delete:");
scanf("%d",&ele);
deleteSpos(ele);
break;
}
}
}

 

