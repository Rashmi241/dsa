#include<stdio.h>
int n;
void selectionsort(int a[])
{
int i,j,temp,pos;
for(i=0;i<(n-1);i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[pos]<a[j])
{
pos =j;
}
}
if(pos!=i)
{
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
}
int main()
{
int a[30],i;
printf("enter the number of element:\n");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
selectionsort(a);
printf("the element after selection sort:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
