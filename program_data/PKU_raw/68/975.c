void main()
{
	

	int n,a[20000]={0},b[50001]={0};
	scanf("%d",&n);
	int i,qu=0;
	for(i=2;i<=n;i++)
	{
		int t=sqrt(i);
		int k,count=0;
		for(k=2;k<=t;k++)
		{
			if(i%k==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			a[qu]=i;
			qu++;
			b[i]=1;
		}
	}
	int l=0;
	for(i=6;i<=n;i++)
	{
		if(i%2==1)
			continue;
		for(l=0;l<qu;l++)
		{
			if(b[i-a[l]]==1)
			{	printf("%d=%d+%d\n",i,a[l],i-a[l]);
			break;
			}
		}
	}



}
