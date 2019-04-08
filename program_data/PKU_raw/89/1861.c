
int know(int **a, int n, int i, int j)
{
	return (a[(i%n)>>5][j%n] & (1<<((i%n)&0x1f))) ? 1 : 0;
}

void set(int **a, int n, int i, int j)
{
	a[(i%n)>>5][j%n] |= 1<<((i%n)&0x1f);
}

int ** read_data(int n) 
{
	int i, j;
	int **a = (int **)malloc(n * sizeof(int *) / 32);
	for (i = 0; i < n / 32; i++) 
	{
		a[i] = (int *)malloc(n * sizeof(int));
		memset(a[i], 0, (n * sizeof(int)));
	}
	for (;;)
	{
		scanf("%d%d", &i, &j);
		if (i == 0 && j == 0) 
			break;
		set(a, n, i, j);
	}
	return a;
}

void free_data(int **a, int n)
{
	int i;
	for (i = 0; i < n / 32; i++) 
	{
		free(a[i]);
	}
	free(a);
}

int main()
{
	int i, j, n, next, k, wrong, candidate;
	scanf("%d", &n);
	int **a = read_data(n);
	/*
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d", know(a, n, i, j));
		}
		printf("\n");
	}
	*/
	// begin
	i = 0;
	j = 1;
	next = 2;
	while (next <= n) 
	{
		if (know(a, n, i, j))
			i = next;
		else
			j = next;
		next++;
	}
	if (i == n)
		candidate = j;
	else 
		candidate = i;
	wrong = 0;
	k = 0;
	while ( !wrong && k < n )
	{
		if (know(a, n, candidate, k) && (candidate != k))
			wrong = 1;
		if (!know(a, n, k, candidate) && (candidate != k))
			wrong = 1;
		k++;
	}
	if (!wrong)
		printf("%d", candidate);
	else
		printf("NOT FOUND");
	// end
	free_data(a, n);
	return 0;
}
