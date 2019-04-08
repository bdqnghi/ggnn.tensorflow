int main()
{
	int x1, y1, x2, y2;
	int i, j, a = 0, t = 1;
	int matrix1[101][101], matrix2[101][101], matrix3[101][101];
	memset(matrix3, 0, sizeof(matrix3));
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i++)
		for (j = 1; j <= y1; j++)
		{
			cin >> matrix1[i][j];
		}
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++)
		for (j = 1; j <= y2; j++)
		{
			cin >> matrix2[i][j];
		}
	for (i = 1; i <= x1; i++)
		for (j = 1; j <= y2; j++)
		{
			for (a = 1; a <= y1; a++)
			{
				matrix3[i][j] = matrix3[i][j] + matrix1[i][t] * matrix2[t][j];
				t = t + 1;
			}
			if (j != y2)
				cout << matrix3[i][j] << " ";
			else
				cout << matrix3[i][j] << endl;
			t = 1;
		}
	return 0;
}