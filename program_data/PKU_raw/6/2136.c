int main()
{
	int k;
	cin >> k;
	int i, j, l, lin, col, sum = 0;
	int num[101][101];
	for(l = 1; l <= k; l++)
	{
		cin >> lin >> col;
		for(i = 1; i <= lin; i++)
		{
			for(j = 1; j <= col; j++)
				cin >> num[i][j];
		}
		
		if(lin >= 2 && col >= 2)
		{
			for(i = 2; i <= lin - 1; i++)
				sum = sum + num[i][1] + num[i][col];
			for(j = 1; j <= col; j++)
				sum = sum + num[1][j] + num[lin][j];
		}
		if(lin == 1 && col >= 2)
		{
			for(j = 1; j <= col; j++)
				sum = sum + num[1][j];
		}
		if(col == 1 && lin >= 2)
		{
			for(i = 1; i <= lin; i++)
				sum = sum + num[i][1];
		}
		if(col == 1 && lin == 1)
			sum = sum + num[1][1];
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}
