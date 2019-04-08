int main()
{
	int i,n,a[100],b[100],sum1=0,sum2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			sum1++;
		else
		{
			if(sum1>sum2)
				sum2=sum1;
			sum1=0;
		}
		if(i==n-1&&sum1>sum2)
                sum2=sum1;
	}
	printf("%d",sum2);
	return 0;
}