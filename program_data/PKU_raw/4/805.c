int main()
{
	int lin, col;
	cin >> lin >> col;
	int i, j;
	int num[100][100];
	for(i = 0; i < lin; i++)
	{
		for(j = 0; j < col; j++)
			cin >> num[i][j];
	}
	if(lin <= col)
	{
		for(j = 0; j < col; j++)
		{
			for(i = 0; i <= j && i < lin; i++)
				cout << num[i][j - i] << endl;
		}
		for(i = 1; i < lin; i++)
		{
			for(j = col - 1; j >= i && col + i - 1 - j < lin; j--)
				cout << num[col + i - 1 - j][j] << endl;
		}
	}
	else
	{
		for(j = 0; j < col; j++)
		{
			for(i = 0; i <= j; i++)
				cout << num[i][j - i] << endl;
		}
		for(i = 1; i < lin; i++)
		{
			for(j = col - 1;col - 1 + i - j < lin && j >= 0 ; j--)
				cout << num[col + i - 1 - j][j] << endl;
		}
	}

	return 0;
}
		
