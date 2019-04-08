


int main()
{
	int n, k;
	int a[LEN];
	int i, j;

	scanf("%d %d", &n, &k);

	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if (i == j) continue;
			if (a[i] + a[j] == k)
			{
				printf("yes");
				return 0;
			}
		}
	}

	printf("no");

	return 0;
}
