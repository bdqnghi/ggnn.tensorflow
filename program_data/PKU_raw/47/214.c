int main()
{
	int i,n,a[100],m;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		scanf("%d",&a[0]);
		for(i=1;i<n;i++)
		{
			a[i]=a[i-1];
		}
		n--;
	}
	for(i=0;i<m-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[m-1]);
	return 0;
}