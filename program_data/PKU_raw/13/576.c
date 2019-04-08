int main()
{
	int n,m,i,j,a[20000],p=1;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for (i=1;i<n;i++)
	{
		scanf("%d",&m);
		for (j=0;j<i;j++)
		{
			if (m==a[j])
			{
				p=0;
				break;
			}
		}
		if (p==0)
		{
			i--;
			n--;
			p=1;
		}
		else
		{
			a[i]=m;
		}
	}
	for (j=0;j<n-1;j++)
	{
		printf("%d ",a[j]);
	}
	printf("%d",a[n-1]);
	return 0;
}