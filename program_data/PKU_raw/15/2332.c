


int array[1000][1000];

int main()
{
	int x1 = 1000, y1 = 1000, x2, y2, i, j, n;

	cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cin >> array[i][j];

			if (array[i][j] == 0)
			{
				x1 = (i < x1) ? i : x1;
				y1 = (j < y1) ? j : y1;
				x2 = i;
				y2 = j;
			}
		}

	cout << (x2 - x1 - 1) * (y2 - y1 -1) << endl;

	return 0;
}

