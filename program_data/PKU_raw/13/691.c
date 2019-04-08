int main()
{
	int n,a[20000];
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
			printf(" %d",a[i]);
	}
	return 0;
}