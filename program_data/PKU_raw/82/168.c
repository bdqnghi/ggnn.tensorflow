int main()
{
	int n,a[100],b[100],i;
	scanf("%d",&n);
	int max = 0, cur = 0;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d\n",&a[i],&b[i]);
	}
	scanf("%d%d",&a[n-1],&b[n-1]);
	for(i=0;i<n;i++)
	{
		if (a[i]>=90 && a[i] <= 140 && b[i] >= 60 && b[i] <= 90) {
			cur++;
		}
		else cur = 0;
		if (cur > max) max = cur;
	}

	printf("%d", max);
	
	return 0;
}