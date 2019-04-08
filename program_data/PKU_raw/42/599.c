void main()
{
	long int i,j,a[100000],*p,n,m,k;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",p++);
	}
	p=a;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if((*p)==k)
		{
			for(j=0;j<n-i-1;j++)
				*(p+j)=*(p+j+1);
			n=n-1;
			p--;
			i--;
		}
		p++;
	}
	p=a;
	for(i=0;i<n-1;i++)
	{
		printf("%d ",*p);
		p=p+1;
	}
	printf("%d",*p);
}