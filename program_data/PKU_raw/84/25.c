
main()
{
	int temp, max, min, a[100] = {0}, n, i, j;

	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(a[i] >= a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("%d\n%d", a[1], a[2]);
}