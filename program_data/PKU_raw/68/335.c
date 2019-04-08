int prime (int a)
{
	int i,j;
	if (a==3||a==5||a==7)
	{
		return 1;
	}
	else
	{
		for (i=3;i<=sqrt(a);i+=2)
		{
			if (a%i==0)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for (i=6;i<=n;i=i+2)
	{
		for (j=3;j<=i/2;j+=2)
		{
			if (prime(j)+prime(i-j)==2)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}