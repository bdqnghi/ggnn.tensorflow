int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int m=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if((a[j]>=a[i])&&(b[j]>=b[i]))
			b[i]=b[j]+1;
		}
		if(b[i]>m)m=b[i];
	}
	printf("%d",m);
} 