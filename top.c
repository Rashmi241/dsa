#include<stdio.h>
int a[6][6],n,visited[10],count=0,top[10],k=0;
int dfs(int v)
{
int w;
count ++;
visited[v]=count;
for(w=0;w<n;w++)
if(visited[w]==0 && a[v][w]==1)
dfs(w);
printf("%d\t",v);
top[k++]=v;
}

void main()
{
int i,j;
printf("enter the number of vertices:");
scanf("%d",&n);
printf("enter the matrix\n");
 for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("adjecency matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("\n----------------dfs traversal-------------\n");
for(i=0;i<n;i++)
visited[i]=0;
dfs(0);
printf("\n-----------------topology sorting------------\n");
for(i=n-1;i>=0;i--)
printf("%d\t",top[i]);
if(count==n)
printf("\ngraph is connected\n");
else
printf("\ngraph is not connected\n");
}
