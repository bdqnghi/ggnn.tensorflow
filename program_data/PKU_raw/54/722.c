int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i=0;
	int m=0;
	int p=0;
	while(1)
	{
		m++;
		p = m;
		for(i=0;i<n;i++)
		{
			if(p%n == k)
			{
				p=p/n*(n-1);
			}
			else
				break;
			if(p<=0)
				break;
		}
		if(i==n)
		{

			printf("%d",m);
			break;
		}
	}
	return 0;
}