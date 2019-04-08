int main()
{
	int n,m,*a,i;
	scanf("%d", &n);
	if (n != 0)
	{
		m = floor(log10(n)) + 1;
		a = (int*)malloc(sizeof(int)*m);
		for (i = 1; i <= m; i++)
		{
			*(a + i - 1) = n % 10;
			n = (n - *(a + i - 1)) / 10;
		}
		for (i = 1; i <= m; i++)
			printf("%d", *(a + i - 1));
	}
	else
		printf("0");
}