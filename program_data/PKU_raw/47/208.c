int main()
{
	int n,i,t;
	int a[150];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
	else
	{
		for(i=0;i<(n-1)/2;i++)
		{
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
	return 0;
}


