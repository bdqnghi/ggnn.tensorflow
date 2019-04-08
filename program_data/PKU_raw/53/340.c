main()
{
	int s[100],t[100];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
				s[j]=-1;
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(s[i]>=0)
			t[j++]=s[i];
	}
	n=j-1;
	for(i=0;i<n;i++)
		printf("%d,",t[i]);
	printf("%d\n",t[n]);
}
