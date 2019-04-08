int main()
{
	int n,i,t=0;
	int prime(int x);
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		if(prime(i)*prime(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
			t=t+1;
		}
	}
	if(t==0)
		printf("empty\n");
	return 0;
}

int prime(int x)
{
	int i,y;
	if(x==1)
		return 0;
	else
	{
		y=sqrt((float)x);
		for(i=2;i<=y;i++)
		{
			if(x%i==0)
				break;
		}
		if(i>y)
			return 1;
		else
			return 0;
	}
}