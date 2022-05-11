#include<stdio.h>
int d[10],p[10],cost[10][10],n;
void diji(int src)
{
int s[10],u,v,i,j,min;
for(i=0;i<n;i++)
{
d[i]=cost[src][i];
p[i]=src;
s[i]=0;
}
s[src]=1;
for(i=1;i<n;i++)
{
min=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)
if(d[j]<min)
{
min=d[j];
u=j;
}
if(u==-1)
return;
s[u]=1;



for(v=0;v<n;v++)
{
if(s[v]==0)
if(d[u]+cost[u][v]<d[u])
{
d[v]=d[u]+cost[u][v];
p[v]=u;
}
}
}
}
}
void short_path(int src,int dst)
{
int i;
i=dst;
while(src!=i)
{
printf("%d<--",i);
i=p[i];
}
printf("%d=%d",i,d[dst]);
printf("\n");
}
void main()
{
int src,i,j;
printf("enter the no. of vertices:");
scanf("%d",&n);
printf("enter the adjecency matrix\n");
 for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
 for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",cost[i][j]);
}
printf("\n");
}
printf("\n enter the source vertex");
scanf("%d",&src);
diji(src);
for(i=0;i<n;i++)
short_path(src,i);
}


