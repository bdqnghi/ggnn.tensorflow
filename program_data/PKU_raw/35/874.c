void main()
{
	int m, n, a[8][8], i, j, maxi, t;
	int rowmax(int a[8][8], int m, int n, int r);
	int colmin(int a[8][8], int m, int n, int c);

	scanf("%d,%d", &m, &n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);

	t = 0;
	for(i=0; i<m; i++)
	{
		maxi = rowmax(a, m, n, i);
		if(i == colmin(a, m, n, maxi))
		{
			printf("%d+%d", i, maxi);
			t++;
		}
	}
	if(t==0)
		printf("No");

}

int rowmax(int a[8][8], int m, int n, int r)
{
	int z, j;
	z = 0;
	for(j=0; j<n; j++)
	{
		if(a[r][z]<a[r][j])
			z = j;
	}
	return(z);
}

int colmin(int a[8][8], int m, int n, int c)
{
	int z, i;
	z = 0;
	for(i=0; i<m; i++)
	{
		if(a[z][c]>a[i][c])
			z = i;
	}
	return(z);
}