int main()
{
	int n,i,a[20000],j,k,b=0,c[20000];
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", a[0]);
	for (i = 1; i <= n - 1; i++)
	{
		k = 0;
		for (j = 0; j <= i-1; j++)
		{
			if (a[i] == a[j]){ k = 1; }
		}
		if (k == 0){ printf(" %d", a[i]); }
	}
	printf("\n");
}