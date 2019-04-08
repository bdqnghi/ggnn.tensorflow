int main()
{
	int m,n,i,a[1000],t,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if(t%2==1)
		{
			a[count]=t;
			count++;
		}
	}
	m=count;
	while(count>=2)
	{
		for(i=1;i<=count-1;i++)
		{
			if(a[i-1]>a[i])
			{
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
		}
		count--;
	}
	printf("%d",a[0]);
	for(i=1;i<=m-1;i++)
	{
		printf(",%d",a[i]);
	}
	return 0;
}