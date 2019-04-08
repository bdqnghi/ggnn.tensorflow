
int main()
{
	int a[100], b[100], c[100], d[100];
	int i, k, e, n;
	double j;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		c[i] = a[i];
		d[i] = b[i];
	}

	for (k = 1; k <= n; k++)
	{
		for (i = 0; i < n - k; i++)
		{
			if(c[i] > c[i + 1])
			{
				e = c[i + 1];
				c[i + 1] = c[i];
				c[i] = e;
			}
			if(d[i] > d[i+1])
			{
				e = d[i+1];
				d[i+1] =d[i];
				d[i] = e;
			}
		}
	}

	if(c[0] > d[0])
		c[0] = d[0];
	if(c[n-1] < d[n-1])
		c[n-1] = d[n-1];
	for(j = c[0]; j <= c[n-1]; j = j + 0.5)
	{
		k = 1;
		for(i = 0; i < n; i++)
		{
			if(j <= b[i] && j >= a[i])
				k = 0;
		}
		if(k == 1)
		{
			printf("no");
			break;
		}
	}
	if(k == 0)
	{
	printf("%d %d", c[0], c[n-1]);
	}





	return 0;
}