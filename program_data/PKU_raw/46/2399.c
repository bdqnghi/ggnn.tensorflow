


int main()
{
	int a[100][100] = {0}, row, col, i, j, b[100][100] = {0}, num = 0;
    cin >> row >> col;
    for (i = 0; i <= row - 1; i++)
		{
			for (j = 0; j <= col - 1; j++)
			cin >> a[i][j];
		}
	i = 0;
	j = 0;
	while (1)
	{
		while (j != col && b[i][j] == 0)
		{
			cout << a[i][j] << endl;
			b[i][j] = 1;
			num++;
			j++;
		}
		j--;
		i++;
		while (i != row && b[i][j] == 0)
		{
			cout << a[i][j] << endl;
			b[i][j] = 1;
			num++;
			i++;
		}
		i--;
		j--;
		while (j != -1 && b[i][j] == 0)
		{
			cout << a[i][j] << endl;
			b[i][j] = 1;
			num++;
			j--;
		}
		j++;
		i--;
		while (i != -1 && b[i][j] == 0)
		{
			cout << a[i][j] << endl;
			b[i][j] = 1;
			num++;
			i--;
		}
		i++;
		j++;
		if (num == row * col)
			break;
	}
 return 0;
}