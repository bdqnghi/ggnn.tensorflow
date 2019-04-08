/**
????2.cpp
?  ?????
?  ??11.01
?  ??????????
*/
  

int main()
{
	int row, col, a[100][100];
    int i, j, n, num = 0, tot;

	cin >> row >> col; 
	tot = row * col;
	for(i = 0;i < row;i++)
		for(j = 0;j < col;j++)
			cin >> a[i][j];
    
	for(n = 0;n < 1 + row / 2;n++)
	{
		for(i = n;i < col - n;i++)
		{
			cout << a[n][i] << endl;
			num++;
		}
		if(num == tot)break;
		for(j = n + 1;j < row - n;j++)
		{
			cout << a[j][col - n - 1] << endl;
			num++;
		}
		if(num == tot)break;
		for(i = col - 2 - n;i >= n;i--)
		{
			cout << a[row - n - 1][i] << endl;
			num++;
		}
		if(num == tot)break;
		for(j = row - 2 - n;j > n;j--)
		{
			cout << a[j][n] << endl;
			num++;
		}
		if(num == tot)break;

	}
	return 0;
}

