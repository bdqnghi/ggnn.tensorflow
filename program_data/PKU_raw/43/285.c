int prime(int x);
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		if(prime(i)&&prime(m-i))
		{
			printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}
int prime(int x)
{
	int echo,i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i==x)
	{
		echo=1;
	}
	else
	{
		echo=0;
	}
	return echo;
}