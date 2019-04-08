void main()
{
	int n,max=0;
	int c[100]={0};
	int i,j=0;
	int sum[100]={0};
	int a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			c[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==1)
		{
			if(i==0||(i>0&&c[i-1]==1))
				sum[j]++;
			else 
			{
				j++;
				sum[j]++;
			}
		}
	}
	for(i=0;i<=j;i++)
		if(max<sum[i])max=sum[i];
	printf("%d",max);

		

}