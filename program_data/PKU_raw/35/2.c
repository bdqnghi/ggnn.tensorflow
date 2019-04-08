
void main()
{
	long i, j, k, n, m, p=-1, q=-1, b;
	scanf("%d,%d", &m, &n);
	long a[20][20];
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			b=1;
			for (k=0;k<n;k++)
				if (a[i][j]<a[i][k]) b=0;
			for (k=0;k<m;k++)
				if (a[i][j]>a[k][j]) b=0;
			if (b)
			{
				p=i;
				q=j;
			}
		}
	if (p<0 && q<0)
		printf("No");
	else
		printf("%d+%d", p, q);
}