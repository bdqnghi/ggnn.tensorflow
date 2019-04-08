//2013.1.4
//zwb

int main ()
{
	int row, col, i, j, cnt = 1;
	int a[201][201] = {0}, b[10001] = {0};
	cin >> row >> col;
	for(i = 1; i <= 200; i++)
	{
		for(j = 1; j <= 200; j++)
			a[i][j] = -1;
	}
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= col; j++)
		{
			cin >> a[i][j];
		}
	}

	i = 1, j = 1;
	while(cnt <= row * col)
	{
		if(a[i][j] != -1)
			b[cnt++] = a[i][j];
		if(j == 1 || i == row)
		{
			j = i + j;
			i = 1;
		}
		else
		{
			i = i + 1;
			j = j - 1;
		}
	}
	for(i = 1; i <= row * col; i++)
	{
		cout << b[i] << endl;
	}
	return 0;
}

		



		
