main()
{
	int n,i,b,c,j,k,l,m;
	int a[10000]={0};
	int d[10000]={0};
	m=0;
	scanf("%d",&n);
	for(i=0;;i++)
	{
		b=1;
		c=1;
		scanf("%d",&b);
		scanf("%d",&c);
		if(b!=c)
		{
		a[b]=a[b]+1;
		d[c]=d[c]+1;
		}
		else if(b==0&&c==0) break;
	}
	for(j=0;j<=n-1;j++)
	{
		if(a[j]!=0) continue;
		else if(d[j]==n-1)
		{
			printf("%d",j);
			m=m+1;
		}
	}
	if(m==0)
	printf("NOT FOUND");
}