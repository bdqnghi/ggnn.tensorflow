int main()
{
	int a[5][5], i, j, maxr[5], row[5], column[5], max, c, count = 0;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			cin >> a[i][j];
	for(i = 0; i < 5; i++)
	{
		max = a[i][0];
		column[i] = 0;
		for(j = 0; j < 5; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				column[i] = j;
			}
		}
		maxr[i] = max;
		row[i] = i;
	}
	for(i = 0; i < 5; i++)
	{
		c = 0;
		for(j = 0; j < 5; j++)
		{
			if(maxr[i] > a[j][column[i]])
			{
				c = 1;
				break;
			}
		}
		if( c == 0)
		{
			cout << row[i] + 1 << " " << column[i] + 1 << " " << maxr[i] << endl;
			count++;
		}
	}
	if(count == 0)
		cout << "not found" << endl;
	return 0;
}