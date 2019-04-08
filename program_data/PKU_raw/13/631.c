void main()
{
	int n,a[100000],i,j,b[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])b[j]=a[j];
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]!=a[i])printf(" %d",a[i]);
}}