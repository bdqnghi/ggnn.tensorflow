
int main()
{
	int a[100][16], i, j, k, t;
	for(i = 0; ; i++)
	{
		scanf("%d", &a[i][0]);
		if(a[i][0] == -1)
			break;
		for(j = 1; a[i][j - 1] != 0; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(j = 0; j < i; j++)
	{
		int n = 0;
		for(k = 0; a[j][k + 1] != 0; k++)
		{
			for(t = k + 1; a[j][t] != 0; t++)
			{
				if(a[j][k] == 2 * a[j][t] || a[j][t] == 2 * a[j][k])
					n++;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}
