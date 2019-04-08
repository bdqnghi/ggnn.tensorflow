void main()
{
	int t,*p,a[100],m,n,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for (j=0;j<m;j++)
	{
		p=a;t=a[n-1];
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		a[0]=t;
	}

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if (i<n-1)
			printf(" ");
	}


}