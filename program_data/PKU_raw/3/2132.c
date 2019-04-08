int main()
{
	int n,i,j;
	int k;
	int a[MAX];
	scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]+a[j]==k)
			{
				printf("yes");
			break;
			}
		}
		if(a[i]+a[j]==k)
		{
			break;
		}
	}
	if(a[i]+a[j]!=k)
		printf("no");
	return 0;
}
