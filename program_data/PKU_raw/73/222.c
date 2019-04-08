//********************************
//*??????? **
//*??????  1200062706**
//*???2012.11.13  **
//********************************

int main()
{
	int i, j, x[5][5];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			int a;
			cin >> a;
			x[i][j] = a;
		}
	}
	int y[5];
	for (i = 0; i < 5; i++)
	{
		int max = 0;
		for (j = 0; j < 5; j++)
		{
			if (max > x[i][j])
				max = max;
			else
				max = x[i][j];
			y[i] = max;
		}
	}
	int y1[5];
	for (i = 0; i < 5; i++)
	{
		int min = x[0][i];
		for (j = 0; j < 5; j++)
		{
			if (min < x[j][i])
				min = min;
			else
				min = x[j][i];
			y1[i] = min;
		}
	}
    int k = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (y[i] == y1[j])
				cout << i + 1 << " " << j + 1 << " " << y[i] << endl;
			else
				k = k + 1;
			if (k == 25)
				cout << "not found" << endl;	
		}
	}

	return 0;
}

