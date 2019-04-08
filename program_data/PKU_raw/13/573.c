int main()
{
	int i,n,j;
	int a[20000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(i==0)printf("%d",a[i]);
		else
		{
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j])break;
			}
			if(j==i)printf(" %d",a[i]);
		}
	}
}
