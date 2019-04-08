void main()
{
	int n,i,j,k,a[300],b,c;
	scanf("%d",&n);
	for(i=0,k=0;i<n;i++)
	{
		scanf("%d",&b);
		c=1;
		for(j=0;j<k;j++)
		{
			if(a[j]==b)
			{
				c*=0;
				break;
			}
		}
		if(c)
			a[k++]=b;
	}
	for(i=0;i<k-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[i]);
}