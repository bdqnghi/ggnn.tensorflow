
int main(int argc, char* argv[])
{
		int i,n ,j,sum=0,m,k,x;
		int edge[100][100];

	scanf("%d\n",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&edge[i][j]);
		}
	}
 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(edge[i][j]==0)
			sum=sum+1;
		}
		if(sum>2)
		{
			m=sum;
		break;
		}
	}

	sum=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
		if(edge[i][j]==0)
			sum=sum+1;
		}
		if(sum>2){
			k=sum;
		break;
		}
	}
	x=(k-2)*(m-2);


	printf("%d\n",x);
	return 0;
}
