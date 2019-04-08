int main()
{
	int sum,a,b,m,n,k,i,j;
	int num[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		for(a=0;a<100;a++)
		{
			for(b=0;b<100;b++)
			{
				num[a][b]=0;
			}
		}
		scanf("%d %d",&m,&k);
		if(m==1&&k==1)
		{
			scanf("%d",&j);
			printf("%d",j);
		}
		else if(m==1&&k!=1)
		{
			for(a=0;a<k;a++)
			{
				scanf("%d",&num[0][a]);
				sum=sum+num[0][a];
			}
			printf("%d",sum);
		}
		else if(m!=1&&k==1)
		{
			for(a=0;a<m;a++)
			{
				scanf("%d",&num[a][0]);
				sum=sum+num[a][0];
			}
			printf("%d",sum);
		}
		else
		{
		for(a=0;a<m;a++)
		{
			for(b=0;b<k;b++)
			{
				scanf("%d",&num[a][b]);
			}
		}
		for(a=0;a<k;a++)
		{
			sum=sum+num[0][a]+num[m-1][a];
		}
		for(a=1;a<(m-1);a++)
		{
			sum=sum+num[a][0]+num[a][k-1];
		}
		printf("%d\n",sum);
		}
	}
}