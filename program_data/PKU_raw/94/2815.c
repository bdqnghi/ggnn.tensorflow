void bubble(int a[],int n)
{
	int tmp, i, j;
	for (i = n - 1; i >= 0;i--)
	for (j = 0; j < i; j++)
	if (a[j] > a[j + 1])
	{
		tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}
}
int main()
{
	int n, a[500],i,b[500],j=0;
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 != 0){ b[j] = a[i]; j += 1; }
	}
	bubble(b, j);
	printf("%d", b[0]);
	for (i = 1; i < j; i++)
	{
		printf(",%d", b[i]);
	}
	printf("\n");
	return 0;
}