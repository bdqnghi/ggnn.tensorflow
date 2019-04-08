

int main()
{
	int n;
	cin >> n;
	int matrix[100][100] = {0};
	int time, min, sum = 0, k;
	for (k = 1; k <= n; k++)
	{
		int i, j;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> *(*(matrix + i) + j);
		sum = 0;
		for (time = 1; time < n; time++)
		{
			for (i = 0; i <= n - time; i++)
			{
				min = *(*(matrix + i));
				for (j = 0; j <= n - time; j++)
					if (*(*(matrix + i) + j) < min) min = *(*(matrix + i) + j);
				for (j = 0; j <= n - time; j++)
					*(*(matrix + i) + j) -= min;
			}
			for (j = 0; j <= n - time; j++)
			{
				min = *(*(matrix) + j);
				for (i = 0; i <= n - time; i++)
					if (*(*(matrix + i) + j) < min) min = *(*(matrix + i) + j);
				for (i = 0; i <= n - time; i++)
					*(*(matrix + i) + j) -= min;
			}
			sum += *(*(matrix + 1) + 1);
			for (i = 1; i <= n - time; i++)
			{
				for (j = 0; j <= n - time; j++)
					*(*(matrix + i) + j) = *(*(matrix + i + 1) + j);
			}
			for (j = 1; j <= n - time; j++)
			{
				for (i = 0; i <= n - time; i++)
					*(*(matrix + i) + j) = *(*(matrix + i) + j + 1);
			}
		}
		cout << sum << endl;
	}
	return 0;
}