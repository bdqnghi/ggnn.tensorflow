void main(void)
{
	int n, k, m, l, i;
	scanf("%d %d", &n, &k);
	m = n - 1;
	do
	{
		l = m;
		for(i = 1;i <= n - 1;i++)
		{
			l = l * n /(n - 1) + k;
			if(l %(n - 1) != 0)
				break;
		}
		m = m + n - 1;
	}
	while(l % (n - 1) != 0);
	l = l * n /(n - 1) + k;
	printf("%d",l);
}