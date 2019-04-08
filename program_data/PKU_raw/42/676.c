void main()
{
	long n, a[100000], k, i;
	scanf("%ld", &n);
	for(i=0; i<n; i++)
		scanf("%ld", &a[i]);
	scanf("%ld", &k);
	for(i=0; i<n; )
	{
		if(a[i]!=k) break;
		i++;
	}
	printf("%ld", a[i]);
	for(i=i+1; i<n; i++)
	{
		if(a[i]==k) continue;
		printf(" %ld", a[i]);
	}
	printf("\n");
}