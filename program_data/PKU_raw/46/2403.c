//**********************************
//*  ????homework_10.cpp       *
//*  ??????1200012884        * 
//*  ?????2012?10?31?      *
//*  ?????????????    *
//**********************************

int main()
{
	int a[101][101];
	int row, col, i, j, count = 0, time;
	cin >> row >> col;
	for (i = 0;i < row;i++)
		for (j = 0;j < col;j++)
			cin >> a[i][j];
	i = -1;
	j = -1;
	time = row * col;
	for (;;)
	{
		i++;
	for (j += 1;j < col;j++)
		{
			cout << a[i][j] << endl;
			time--;
				}
			if (time == 0)
				break;

	j--;
	
	for (i += 1;i < row;i++)
		{
			cout << a[i][j] << endl;
			time--;
				}
			if (time == 0)
				break;

	i--;

	for (j -= 1;j >= count;j--)
		{
			cout << a[i][j] << endl;
			time--;
				}
			if (time == 0)
				break;

	j++;
	
			count++;
	for (i -= 1;i >= count;i--)
		{
			cout << a[i][j] << endl;
			time--;
				}
			if (time == 0)
				break;

	row--;
	col--;

	}
	return 0;
}

