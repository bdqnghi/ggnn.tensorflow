
int main ()
{
	int num[100][100];
	int lefti = 0, leftj = 0, righti = 0, rightj = 0;
	int number = 0;
	int n = 0;
	int i, j;
	scanf ("%d", &n);
	memset(num, -1, 10000);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf ("%d", &num[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (num[i][j] == 0 && num[i+1][j] == 0 && num[i][j+1] == 0)
			{
				lefti = i;
				leftj = j;
			}
			else if (num[i][j] == 0 && num[i-1][j] == 0 && num[i][j-1] == 0)
			{
				righti = i;
				rightj = j;
			}
		}
	}
	number = (rightj - leftj - 1) * (righti - lefti - 1);
	printf ("%d\n", number);
	printf ("%d %d %d %d", lefti, leftj, righti, rightj );
	return 0;
}

