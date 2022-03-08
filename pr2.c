#include<stdio.h>
void main()
{
int a[20],key,i,n=5,flag=0;
printf("array is");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
if(key==a[i])
{
flag=1;
}
if(flag==1)
printf("item is found");
else
printf("item is not found");
}

