void main()
{
	long int n,a,i,j,m;
	scanf("%ld",&n);
    long int b[100000];
	for(i=0;i<n;i++)
	{
		scanf("%ld ",&b[i]);
	}
     scanf("%ld",&a);
	 j=0;
for(i=0;i<n;)
	{
		if(b[i]!=a)
		{
			b[j]=b[i];
			j=j+1;
			i=i+1;
		}
		else
			i=i+1;
	}
	m=j-1;
	for(j=0;j<=m-1;j++)
	printf("%ld ",b[j]);
	printf("%ld",b[m]);
}
