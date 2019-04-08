int main()
{
	int row, col, array[100][100], i, j, k, min, flag;
	cin >> row >> col;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			cin >> array[i][j];
		}
	}
    
    min = (row < col) ? row : col;
	for (k = 0; 2 * k < min; k++)
	{
		flag = 0;
		for (i = 1 + k; i <= col - k; i++)
			cout << array[1 + k][i] << endl;
		for (j = 2 + k; j <= row - k; j++)
		{cout << array[j][col - k] << endl; flag=1;}
		if(flag)
		{flag=0;
		for (i = col - k - 1; i >= 1 + k; i--)
		{cout << array[row - k][i] << endl;flag=1;}
		if(flag)
		for (j =row - k - 1; j >= 1 + k + 1; j--)
			cout << array[j][1 + k] << endl;
		}
	}
	return 0;
}
