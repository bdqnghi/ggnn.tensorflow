float GPAlize(int n)
{
	if (n >= 90)return 4.0;
	else if (n >= 85&&n<=89)return 3.7;
	else if (n >= 82 && n <= 84)return 3.3;
	else if (n >= 78 && n <= 81)return 3.0;
	else if (n >= 75 && n <= 77)return 2.7;
	else if (n >= 72 && n <= 74)return 2.3;
	else if (n >= 68 && n <= 71)return 2.0;
	else if (n >= 64 && n <= 67)return 1.5;
	else if (n >= 60 && n <= 63)return 1.0;
	else return 0;
}
int main()
{
	int n,m[10],g[10],i;
	float sum2 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m[i]);
		sum2 += m[i];
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &g[i]);
	}
	float c[10],sum1=0;
	for (i = 0; i < n; i++)
	{
		c[i] = GPAlize(g[i])*m[i];
		sum1 += c[i];
	}
	printf("%.2f\n", sum1 / sum2);
}