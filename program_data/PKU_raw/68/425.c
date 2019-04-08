void main()
{
	int prime(int x);
	int n,i,j,k;
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=2;j<=i/2;j++)
			{
				k=i-j;
				if(prime(j)==1&&prime(k)==1)
				{
					printf("%d=%d+%d\n",i,j,k);
					break;
				}
			}
		}
	}
}
int prime(int x)
{
	int i,k;
	if(x==2) return 1;
	k=sqrt(x);
	for(i=2;i<=k;i++)
	{
		if(x%i==0) break;
	}
	if(i>k) return 1;
	else return 0;
}
