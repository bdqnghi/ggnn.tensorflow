int main()
{
	int a[5][5], i, j, row[5], col[5], sum, n;
	int max[5] = {0};
	sum = 0;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			cin >> a[i][j];
	}
	for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
		{
			if(a[i][j] > max[i])
			{
				max[i] = a[i][j];
				row[i] = i;
			    col[i] = j;
			}
		}
	for(n = 0; n < 5; n++)
	{
		for(i = 0; i < 5; i++)
		{
			if(a[i][col[n]] < max[n]) break;
		}
		if(i == 5)
		{
			sum++;
			cout << row[n] + 1 << " " << col[n] + 1 << " " << max[n] << endl;
		}
    }
	if(sum == 0)
		cout << "not found" << endl;
	return 0;
}
