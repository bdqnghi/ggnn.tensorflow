
int main()
{
	int a[5][5] = {{0,0}}, i, j;
	for (i = 0; i <= 4; i++ )
	{
		for (j = 0; j <= 4; j++ )
		{
			cin >> a[i][j];
		}
	}
	int max[5] = {0}, min[5] = {0};
	for (i = 0; i <= 4; i++ )
	{
		for (j = 1; j <= 4; j++ )
		{
			if (a[i][j] > a[i][max[i]])
			{
				max[i] = j;
			}
		}
	}
	for (j = 0; j <= 4; j++ )
	{
		for (i = 1; i <= 4; i++ )
		{
			if (a[i][j] < a[min[j]][j])
			{
				min[j] = i;
			}
		}
	}
	int flag = 0;
	for (i = 0; i <= 4; i++ )
	{
		if (min[max[i]] == i)
		{
			cout << i + 1 << " " << max[i] + 1 << " " << a[i][max[i]] << endl;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		cout << "not found" << endl;
	}

	return 0;
}