void main()
{
	int n,i,j,t;
	t=0;
	int a[300];
	int b[300];
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
	scanf("%d",&a[n-1]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(a[i]==a[j])
			{a[i]=-1;
			break;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			b[t]=a[i];
			t=t+1;
		}
	}
	for(i=0;i<t-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[t-1]);
}