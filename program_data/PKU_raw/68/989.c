
int isprime(int a)
{
	int i,sqrta;
	if(a%2==0) return 0;
	sqrta=(int)sqrt(a);
	for(i=3;i<=sqrta;i+=2)
	{
		if(a%i==0) return 0;
	}
	return 1;
}

int main(int argc, char* argv[])
{
	int n,i,j;
    scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=2;j<=i/2;j++)
		{
			if(isprime(j)&&isprime(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}

