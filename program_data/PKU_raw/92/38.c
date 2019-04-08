int tj[1000],qw[1000],n,money=0;
void games(int n)
{
if(n>1)
{
	int i,j,mid;
	if(tj[n-1]<qw[n-1])
	{
	    tj[n-1]=0;qw[0]=0;money=money-200;
        for(i=0;i<n-1;i++)
		qw[i]=qw[i+1];
	}
	else if(tj[n-1]>qw[n-1])
	{
		tj[n-1]=0;qw[n-1]=0;money=money+200;
	}
	else if(tj[0]>qw[0])
	{
		tj[0]=0;qw[0]=0;money=money+200;
		for(i=0;i<n-1;i++)
		{tj[i]=tj[i+1];qw[i]=qw[i+1];}
	}
	else if(tj[0]<=qw[0])
	{
		if(tj[n-1]<qw[0])money=money-200;
		tj[n-1]=0;qw[0]=0;
        for(i=0;i<n-1;i++)
		qw[i]=qw[i+1];
	}
	games(n-1);
}
	if(n==1)
	{
		if(tj[0]>qw[0])money=money+200;
		if(tj[0]<qw[0])money=money-200;
	}
}
void main()
{
	int i,j,mid;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++)
			scanf("%d",&tj[i]);
		for(i=0;i<n;i++)
			scanf("%d",&qw[i]);
		for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
		if(tj[j]>tj[i])
		{
			mid=tj[j];tj[j]=tj[i];tj[i]=mid;
		}
		if(qw[j]>qw[i])
		{
			mid=qw[j];qw[j]=qw[i];qw[i]=mid;
		}
		}
		games(n);
		printf("%d\n",money);
		money=0;
	}
}
