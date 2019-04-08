void main()
{
	int n,k;
	int s=0;
	int i,j;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<n)
		{
			if(i==j)
			{
				j++;
				continue;
			}
			else
			{
				s=a[i]+a[j];
				j++;
				if(k==s)
				{
					printf("yes");
					goto label;
				}
			};
		};
		if((i==n-1)&&(s!=k))
			printf("no");
	}
    label:
	return(0);
}