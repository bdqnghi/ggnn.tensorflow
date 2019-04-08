void main()
{
	int n,a[301],i,h,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for(h=1;h<i;h++)
		{
			if(a[i]==a[h])
			{
				i--;
				n--;
				break;
			}
		}
	}
	printf("%d",a[1]);
	for(i=2;i<=n;i++)
		printf(",%d",a[i]);
	printf("\n");
}