int ssd(int i);
int main()
{
	int j,n,flag=0;
	scanf("%d",&n);
	if(n==1||n==2||n==4)
	{
		printf("empty\n");
		return 0;
	}
	if(n==3)
	{
		printf("1 3\n");
		return 0;
	}
	if(n==5)
	{
		printf("3 5\n");
		return 0;
	}
	for(int i=5;i<=n;i++)
	{
		j=i-2;
		if(ssd(i))
		{
			printf("%d %d\n",j,i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("empty\n");
	}
	return 0;
}

int ssd(int i)
{
	int j;
	j=i-2;
	for(int p=2;p<i;p++)
	{
		if(i%p==0)
		{
			return 0;
		}
	}
	for(int q=2;q<j;q++)
	{
		if(j%q==0)
		{
			return 0;
		}
	}
	return 1;
}

	
