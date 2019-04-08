int main()
{
	int matrixA[100][100], matrixB[100][100], matrixC[100][100] = {0};
	int i, j;
	int x1, y1;
	cin >> x1 >> y1;
	for(i = 0; i < x1; i++)
	{
		for(j = 0; j < y1; j++)
			cin >> matrixA[i][j];
	}
	int x2, y2;
	cin >> x2 >> y2;
	for(i = 0; i < x2; i++)
	{
		for(j = 0; j < y2; j++)
			cin >> matrixB[i][j];
	}
	for(int i1 = 0; i1 < x1; i1++)
	{
		for(int j1 = 0; j1 < y2; j1++)
		{
			for(i = 0; i < x2; i++)
				matrixC[i1][j1] = matrixC[i1][j1] + matrixA[i1][i] * matrixB[i][j1];
		}
	}
	for(i = 0; i < x1; i++)
	{
		cout << matrixC[i][0];
		for(j = 1; j < y2; j++)
			cout << " " << matrixC[i][j];
		cout << endl;
	}
	return 0;
}