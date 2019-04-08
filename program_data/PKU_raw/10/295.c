int main()
{
	int n;
	scanf("%d",&n);
	int a[25];
	int b[25];
	int max;
	for(int i=0;i<n;i++)
	{
		b[i]=1;
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i;j<n;j++)
		{
			if(i!=j&&a[i]>=a[j]&&b[i]<1+b[j])
			{
				b[i]=b[j]+1;
			}
		}
	}
	max=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%d\n",max);
}
