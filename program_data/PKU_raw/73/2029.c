int main ()
{
	int i, j, k, m, row1, row2, column, max, min, flag = 0;
	int a[5][5];
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
		{
			cin >> m;
			a[i][j] = m;
		}
	for(i = 0; i < 5; i++)
	{
		max = 0;
		for(j = 0; j < 5; j++)
		{
			if(a[i][j] > max) 
			{
				max = a[i][j];
				row1 = i;
				column = j;
			}
		}
		min = a[0][column];
		for(k = 0; k < 5; k++)
		{
			if(a[k][column] <= min) 
			{
				min = a[k][column];
				row2 = k;
			}
		}
		if(row1 == row2)
		{
			flag = 1;
			cout << row1 + 1 << " " << column + 1 << " " << max << endl;
		}
		
	}
	if(flag == 0)
		cout << "not found" << endl;
	return 0;
}
