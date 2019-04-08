main()
{
	long i,j,n,k,m=0,t;
	long a[100000];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			m++;
			for(j=0;j<=i;j++)
			{
				t=a[0];
			    a[0]=a[j];
		    	a[j]=t;
			}
		}
	}
	for(i=m;i<n-1;i++)
		printf("%ld ",a[i]);
	printf("%ld",a[n-1]);
}
