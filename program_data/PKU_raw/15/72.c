int main()
{
	int n, j, s, a=0, k[1000];
	scanf("%d\n", &n);
	for(j=0; j<n*n; j++)
	{
		scanf("%d", &k[j]);
	}
	for(j=0; j<n*n; j++)
	{
		if(k[j]==0)
			a=a+1;
	}
	s=(a/4-1)*(a/4-1);
	printf("%d\n", s);
	return 0;
}