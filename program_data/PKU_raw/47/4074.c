int main()
{
	int a[100],n,i,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
				e=a[i];
				a[i]=a[n-i-1];
				a[n-i-1]=e;
	}
	for(i=0;i<n;i++)
	{
		if(i!=(n-1))
		{
			printf("%d ",a[i]);
		}
		if(i==(n-1))
		{
			printf("%d",a[i]);
		}
	}

	return 0;

}
