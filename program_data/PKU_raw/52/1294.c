void main()
{
	int m,n,i,*p,t;
	int a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		t=a[n-1];
		p=a+n-1;
		while(p!=a)
		{
			*p=*(p-1);
			p--;
		}
		a[0]=t;
	}
	for(i=0;i<n;i++)
	{
		if(i)
			printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
}
