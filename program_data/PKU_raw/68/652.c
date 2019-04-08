int prime(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
		if(m%i==0)
		{
			return 0;
			break;
		}
	if(i>sqrt(m)) return 1;
}
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		int j,k;
		for(j=3;j<i;j++)
		{
			if(prime(j))
			{
				if(prime(i-j))
				{
					printf("%d=%d+%d\n",i,j,i-j);
					break;
				}
			}
		}

	}
}