
int main()
{
	int n;
	int g1[100000] = {0};
	int g2[100000] = {0};
	int i, j;
	scanf("%d", &n);
	while (scanf("%d%d", &i, &j), i != 0 || j != 0)
	{
		g1[i]++;
		g2[j]++;
	}
	for (i = 0; i < n; i ++)
		if (g1[i] == 0 && g2[i] == n - 1)
		{
			printf("%d", i);
			break;
		}
	if (i == n)
	printf("NOT FOUND\n");
	return 0;
}
