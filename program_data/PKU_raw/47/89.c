void main()
{
	int n,s[100],b[100],i,j,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		s[n+1-i]=a;
	}
	for(j=1;j<=n-1;j++)
	{
        printf("%d ",s[j]);
	}
	printf("%d",s[n]);
}