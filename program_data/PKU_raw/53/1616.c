int main()
{
	int a[300],n,k,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		for(k=0;k<=i-1;k++)
		{
			if (a[k]==a[i])
				a[i]=-100;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if (i==0)
			printf("%d",a[i]);
		else if (a[i]!=-100)
			printf(",%d",a[i]);
	}
	return 0;
}