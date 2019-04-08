int main()
{
	int h=1,n,m;int flag=1;
	int a[300];
	int b[300];
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
    b[1]=a[1];
	for(i=1;i<=n;i++)
	{
		flag=1;
		for(j=1;j<=h;j++)
		{
			if(a[i]==b[j]) flag=0;
		}
		if(flag==1)
		{
			h++;
			b[h]=a[i];
		}
	
	}
	if(h==1) printf("%d",a[1]);
	if(h>=2)
	{
    for(i=1;i<=h-1;i++)printf("%d,",b[i]);
	printf("%d",b[h]);
	return 0;
	}
}