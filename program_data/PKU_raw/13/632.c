int main()
{
	int n,b,a[20000],i,j;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&b);
		a[i]=b;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				a[i]=0;
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]!=0)
			printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}