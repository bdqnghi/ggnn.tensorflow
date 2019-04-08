void main()
{
	int sz[500], m, i, s=0,k,n=0;
	for(k=0;k<500;k++)
	{
		scanf("%d",&sz[k]);
		n=n+1;
		if(sz[k-1]==0&&sz[k]==0)
			break;
	}
	for(k=0;k<n;k++)
	{
		if(k%2==0&&sz[k]!=0)
		{
			for(i=2; i<=sz[k]; i++) s=(s+sz[k+1])%i;
			printf ("%d\n", s+1);
			s=0;
			i=2;
		}
	}
}
