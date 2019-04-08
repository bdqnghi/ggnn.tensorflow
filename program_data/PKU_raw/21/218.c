void main()
{
	int n;
	int sum;
	int a[300],i;
	float b[300],ave;
	float c,d;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	c=sum;d=n;
	ave=c/d;
	for(i=0;i<n;i++)
	{
		if(a[i]>ave)
			b[i]=a[i]-ave;
		else b[i]=ave-a[i];
	}
	int flag;
	flag=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>b[flag])
			flag=i;
	}
	int flags;
	flags=(-1);
	for(i=0;i<n;i++)
	{
		if(b[i]==b[flag]&&i!=flag)
			flags=i;
	}
	if(flags==(-1))
		printf("%d",a[flag]);
	else 
	{
		if(a[flag]>a[flags])
			printf("%d,%d",a[flags],a[flag]);
		else printf("%d,%d",a[flag],a[flags]);
	}
}
