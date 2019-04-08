int main()
{
	int i,a,n,e,sz[100],sx[100]={0};
	char st[100][11],sa[11],sd[100][11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s",&st[i]);
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]>=60)
		{
			sx[i]=sz[i];
			strcpy(sd[i],st[i]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(a=0;a<n-i;a++)
		{
			if(sx[a]<sx[a+1])
			{
				e=sx[a];
				sx[a]=sx[a+1];
				sx[a+1]=e;
				strcpy(sa,sd[a]);
				strcpy(sd[a],sd[a+1]);
				strcpy(sd[a+1],sa);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(sx[i]>=60)
		puts(sd[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]<60)
		puts(st[i]);
	}
	return 0;
}