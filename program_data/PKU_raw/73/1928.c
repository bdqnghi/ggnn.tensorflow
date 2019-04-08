
int main()
{
	int a[5][5] , i, j, k, 
		max, row, column, count = 0;
	for(i = 0; i < 5; i ++)
	{
		for(j = 0; j < 5; j ++)
		{cin >> a[i][j];}
	}
	for(i = 0; i < 5; i++)
	{
		max = 0;
		for(j = 0; j < 5; j ++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				row = i; column = j;
			}
		}
		for(k = 0; k < 5; k ++)
		{
			if(max > a[k][column])
				break;
		}
		if(k == 5)
		{
			count = 1;
			cout << row + 1 << " " << column + 1 
				 << " " << max << endl;
		}
	}
		if(count == 0)
			cout << "not found" <<endl;
	return 0;
}

