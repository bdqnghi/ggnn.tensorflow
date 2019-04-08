void main()
{
	int n,m,i,a[100],b[100],*p,j;
	scanf("%d%d",&n,&m);
	scanf("\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=b;
if(i=n-m)
{
	*p=a[i];
	printf("%d",*p);
}
	for(i=n-m+1;i<n;i++)
	{
		j=(i+m)%(n-1);
		*(p+j-1)=a[i];
	
		printf(" %d",*(p+j-1));
	}
	
	
	for(i=0;i<n-m;i++)
	{
		*(p+i+m)=a[i];
		printf(" %d",*(p+i+m));
	}

	
}




      


