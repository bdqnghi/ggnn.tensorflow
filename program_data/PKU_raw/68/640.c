void main()
{
	int prime(int x);
	int n,i,j;
	scanf("%d",&n);
	for (i=6;i<=n;i+=2)
	{
		for (j=3;j<=i/2;j++)
			if ((prime(j)==1)&&(prime(i-j)==1))
			{
				printf("%d=%d+%d\n",i,j,i-j);				
				break;
			}
	}
}

int prime(int x)
{
	int t=1,i;
	if (x%2==0)
		t=0;
	i=3;
	while (i*i<x+1)
	{
		if (x%i==0)
		{
			t=0;
			break;
		}
		i+=2;
	}
	return t;
}