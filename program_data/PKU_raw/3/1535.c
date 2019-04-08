int main()
{
	int a[1000],b[1000000];
	int i,j,n,k,m=0,sum=0,c;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[m]=a[i]+a[j];
			m++;
		}
	}
	for(c=0;c<m;c++)
	{
		if(b[c]==k)
		{
			sum=sum+1;
		}
	}
	if(sum!=0)
	{
		printf("yes");
	}
	else printf("no");
	return 0;
}