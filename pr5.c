#include<stdio.h>
int n;
void bubblesort(int a[])
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main()
{
int a[10],i;
printf("enter the number of element:\n");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a);
printf(" sorted order:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
