int h(int n)
{
	int s=0,k,y=n;
	while(y>0)
	{
		k=y%10;
		s=10*s+k;
		y=y/10;
	}
	if(s==n)
		return(1);
	else
		return(0);
}
int s(int n)
{
	if(n==1)
		return(0);
	else
	{
		int i,j;
		j=n/2;
		for(i=2;i<=j;i++)
		{
		if(n%i==0)break;
		else
			j=n/i;
		}
		if(i>j)
			return(1);
		else
			return(0);
	}
}
void main()
{
	int m,n,i,k=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n&&k<1;i++)
	{
		if(h(i)&&s(i))
		{
			printf("%d",i);
			k=k+1;
		}
	}
	if(k==0)
		printf("no");
	else
	{
		int j;
		for(j=i;j<=n;j++)
		{
			if(h(j)&&s(j))
				printf(",%d",j);
		}
	}
}