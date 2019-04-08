void main()
{
	int n,i,a[300],b[300]={0},m=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]) b[j]=1;
	}
	for(i=n-1;i>=0;i--)
	{
		if(b[i]==0) break;
		else m=m+1;}
	for(i=0;i<n-m-1;i++)
	{
		if(b[i]==0) printf("%d,",a[i]);
	}
	printf("%d",a[n-m-1]);
}