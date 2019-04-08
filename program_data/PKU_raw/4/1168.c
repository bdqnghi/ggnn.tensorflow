int main()
{
	int row, col;                                    //????????? 
	int a[110][110];
	int max, min;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i ++)
	for(int j = 0; j < col; j ++)
	{
		cin >> a[i][j];
	}
	
	if(row > col)
	{
		max = row;
		min = col;
	}
	else
	{
		max = col;
		min = row;
	}
	
	for(int i = 0; i < min; i ++)
	for(int j = 0; j <= i; j ++)
	cout << a[j][i - j] << endl;
	
	if(col != row)
	{
		for(int i = min; i < max; i ++)
		{
			if(col > row)
			for(int j = 0; j < min; j ++)
			cout << a[j][i - j] << endl;
			
			else
			for(int j = col - 1; j >= 0; j --)
			cout << a[i - j][j] << endl;
		}
	}
	
	
	for(int i = max; i <= row + col - 2; i ++)
	for(int j = col - 1; i - j <= row - 1; j --)
	cout << a[i - j][j] << endl;
		
	
	 
	return 0;
}