int main()
{
	int n,i,j,k,a[1000],b[1000],c[1000000];
	int e=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			c[e]=a[i]+b[j];
			e++;
			}
		}
	}
	for(i=0;i<=e;i++)
	{
		if(i<e&&c[i]==k)
		{
			printf("yes\n");
			break;
		}
		if(i==e&&c[e]==k)
		{
			printf("yes\n");
		}
		else if(i==e)
		{
			printf("no\n");
		}
	}
	return 0;
}