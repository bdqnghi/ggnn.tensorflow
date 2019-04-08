//****************************************************
// file: 3.cpp
// description: ??????????
// author? ?? 1200012858
// date? 2012-11-8
//****************************************************
int main ()
{
	int k, l, m, n, i, j, sum = 0;
	int array[100][100];
	cin >> k;
	for (l = 1; l <= k; l++)
	{
		sum = 0;
		cin >> m >> n;
		if (m == 1 || n == 1)
		{
			for (i = 0; i < m; i++)
			{	
				for (j = 0; j < n; j++)
			        {	
						cin >> array[i][j];
						sum += array[i][j];
				    }
		    }
			cout << sum << endl;
			break;
		}
		i = 0;
		for (j = 0; j < n; j++)
		{
			cin >> array[0][j];
			sum += array[0][j];
		}
		for (i = 1; i < m - 1; i++)
		{	
			for (j = 0; j < n; j++)
			{	cin >> array[i][j];}
			sum = sum + array[i][0] + array[i][j-1];
		}
		i = m-1;
		for (j = 0; j < n; j++)
		{
			cin >> array[m - 1][j];
			sum += array[m - 1][j];
		}
		cout << sum << endl;
	}
	return 0;
}