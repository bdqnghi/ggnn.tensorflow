


int n,i,j,k,x,a[1001];

int main()
{
	int sushu(int n);
	void jiafa(int x);
	scanf("%d",&n);
	for(j=6;j<=n;j+=2)
	{
		jiafa(j);
	}
	return 0;
}

int sushu(int n)
{
	if(n%2==1)
	{
		for(k=3;k<=sqrt(n);k+=2)
			if(n%k==0)
				return 0;;
			return 1;
	}
	else
		return 0;
}

void jiafa(int n)
{
	for(i=3;i<=n/2;i+=2)
	{
		if(sushu(i))
		{
			if(sushu(n-i))
			{
				printf("%d=%d+%d\n",n,i,n-i);
				break;
			}
		}
	}
}
