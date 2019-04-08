int main()
{
	int i,j,s,k=0,a,b,sum=0,summ=0,m,n;
	int sz[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&sz[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]>=k)
			{
				k=sz[i][j];
				a=i;
				b=j;
			}
		}
		for(s=0;s<m;s++)
		{
			if(sz[a][b]>sz[s][b])
				break;
		}
		if(s==m)
		{
			printf("%d+%d\n",a,b);
			summ++;
		}
		a=b=k=0;
		sum=0;
	}
	if(summ==0)
		printf("No");
	return 0;
}
