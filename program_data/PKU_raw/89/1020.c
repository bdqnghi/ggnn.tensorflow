void main()
{
	int i,j,n=0,k;
	scanf("%d",&k);
	int rs[10000],brs[10000];
	for(i=0;i<k;i++)
	{
		rs[i]=0;brs[i]=0;
	}
	while(1)
	{
		scanf("%d%d",&i,&j);
		if(i==0&&j==0)break;
		else
		{
			rs[i]++;brs[j]++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(rs[i]==0&&brs[i]==(k-1))
		{
			printf("%d",i);
			n=1;
		}
	}
	if(n==0)
		printf("NOT FOUND");
}

