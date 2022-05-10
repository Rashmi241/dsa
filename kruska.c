#include<stdio.h>
int i,j,n,cost[15][15],v1=0,v2=0,mincost;
void doUnion(int root[],int v1,int v2){
	int temp,i;
	temp=root[v2];
	for(i=0;i<n;i++)
	{
		if(root[i]==temp)
		{
			root[i]=root[v1];
	}
	}
}
void findMin(){
	int edgewt=99,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(cost[i][j]>0 && cost[i][j]<edgewt)
			   {
				edgewt=cost[i][j];
				v1=i;
				v2=j;		
		}	
	}
			   }
}
void kruskal()
{
	int i,edgewt;
	int root[n];
	
	for(i=0;i<n;i++)
		root[i]=i;
	printf("Edges of minimum cost spanning tree are ");
	i=0;
	while(i!=n-1){
		findMin();
		edgewt=cost[v1][v2];
		cost[v1][v2]=cost[v2][v1]=0;
		if(root[v1]!=root[v2]){
			printf("\n(%d,%d)",v1,v2);
			doUnion(root,v1,v2);
			mincost+=edgewt;
			i++;
		}
	}
	printf("\nCost of the spanning tree is %d",mincost);
}
void main()
{
       int i,j;
	printf("Enter the number of vertices");
	scanf("%d",&n);
	printf("\nEnter the undirected graph as adjecency matrix\n");
	
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",cost[i][j]);
		}
		printf("/n");
	}
			
kruskal();
}


