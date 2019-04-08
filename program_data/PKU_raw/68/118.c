
int prime(int x)
{
	int prime=1,i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i/2;j=j+2)
		{
			if(prime(j)==1&&prime(i-j)==1)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}