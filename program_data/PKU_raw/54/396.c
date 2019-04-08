void main()
{
	int n, k, total, left, i, x=1;
	scanf("%d %d", &n, &k);
	total=n+k;
	for( ; ; total++)
	{
		left=total;
		i=1;
		while(i<=n)
		{
			i++;
			if(left%n==k&&left>=n+k)
				left=(left-k)*(n-1)/n;
			else left=0;
		}
		if(left/(n-1)>=1) break;
	}
	printf("%d\n", total);
}