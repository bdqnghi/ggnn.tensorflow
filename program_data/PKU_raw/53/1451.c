int main()
{
	int n,i,j,k,l,m,a[300],b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=0;
	for(i=0;i<n-1;i++)
	{
		k=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				b[l]=j;
				l++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		m=0;
		for(j=0;j<l;j++)
		{
			if(i==b[j])
			{
				m=1;
			}
		}
		if(m==0 && i!=0)
		{
			printf(",%d",a[i]);
		}
		else if(i==0)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}