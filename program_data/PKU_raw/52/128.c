
int main ()
{
	int x[20];
	int *p;
	int n, m, i, j;
	scanf ("%d %d", &n, &m);
	p = (int *) malloc (sizeof (int) * n);
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &x[i]);
	}
	j = 0;
	for (i = n - m ; i < n; i++)
	{
		*(p + j) = x[i];
        j++;
	}
	j = m;
	for (i = 0; i < n - m ; i++)
	{
		*(p + j) = x[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf ("%d ", *(p + i));
		}
		else 
		{
			printf ("%d\n", *(p + i));
		}
	}
	free(p);
	return 0;
}