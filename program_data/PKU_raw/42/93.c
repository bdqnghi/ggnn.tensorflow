
void main()
{
	int n,i,j,k;
	int a[100000];
	
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}

	scanf("%ld",&k);

	for(i=0;i<n;i++)
	{
		while(a[i]==k && n>i)
		{
			for(j=i+1;j<n;j++)			a[j-1]=a[j];
			n=n-1;
		}
	}
 
	for(i=0;i<n-1;i++)		printf("%ld ",a[i]);
	if(n>=0)				printf("%ld",a[n-1]);

}