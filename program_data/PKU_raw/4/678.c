int main()
{
	int a[100][100],i,j,i1,j1;
	scanf("%d%d",&i,&j);
	for(i1=1;i1<=i;i1++)
	{
		for(j1=1;j1<=j;j1++)
		{
			scanf("%d",&a[i1][j1]);
		}
	}
	j1=1;
	i1=1;
	printf("%d",a[1][1]);
	while(j1!=j||i1!=i)
	{
		i1=i1+1;
		j1=j1-1;
		if(j1==0)
		{
			j1=i1;
			i1=1;
		}
		if(j1>j||i1>i) continue;
		printf("\n%d",a[i1][j1]);
	}
	return 0;
}