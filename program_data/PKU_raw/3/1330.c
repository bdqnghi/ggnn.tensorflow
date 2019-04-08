int main()
{
	int n, k, i, j, x=0;
	int a[1000];
	scanf("%d %d", &n, &k);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
				x=1;
		}
	}
	if(x==1)
		printf("yes");
	else
		printf("no");
	return 0;

}
