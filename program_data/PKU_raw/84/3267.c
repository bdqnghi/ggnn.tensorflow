void main()
{
	int a[101];
	int n,j,b=0,t,c=0;
	scanf("%d",&n);
	for(j=0;j<n;j=j+1)
		scanf("%d",&a[j]);
	while(b<n-1)
	{
		if(a[b]>a[b+1])
		{
			t=a[b];
			a[b]=a[b+1];
			a[b+1]=t;
		}
		b=b+1;
	}
	while(c<n-2)
	{
		if(a[c]>a[c+1])
		{
			t=a[c];
			a[c]=a[c+1];
			a[c+1]=t;
		}
		c=c+1;
	}
	printf("%d\n%d\n",a[n-1],a[n-2]);
}
