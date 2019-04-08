double dosum(int n)
{
	int i,co=2;
	double a[1000], b[1000],sum=0;
	a[0] = 2; a[1] = 3;
	b[0] = 1; b[1] = 2;
	for (i = 2;; i++)
	{
		if (co == n)break;
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
		co += 1;
	}
	for (i = 0; i < n; i++)
		sum = sum + a[i] / b[i];
	return sum;
}
int main()
{
	int n,i,m,j;
	double a[100];
	scanf("%d", &n);
	
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &m); if (m == 1){ a[0] = 2.000; }
			else{ a[i - 1] = dosum(m); }
		}
		for (i = 0; i <= n - 1; i++)
			printf("%.3lf\n", a[i]);
}