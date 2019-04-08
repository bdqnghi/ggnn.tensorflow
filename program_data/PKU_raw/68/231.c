int prime (int x)
{
	int i,j;
	if (x==3||x==5||x==7)
	{
		return 1;
	}
	else
	{
		for (i=3;i<=sqrt(x);i+=2)
		{
			if (x%i==0)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main(int argc, char* argv[])
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

