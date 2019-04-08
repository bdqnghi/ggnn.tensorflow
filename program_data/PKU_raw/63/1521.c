//****************************************************
// file: 4.cpp
// description: ????
// author? ?? 1200012858
// date? 2012-11-8
//****************************************************
int main ()
{
	int x1, y1, x2, y2, i, j, m, n, t;
	int a[100][100], b[100][100], c[100][100] = {0};
	cin >> x1 >> y1;
	for (i = 0; i < x1; i++)
	{	
		for (j = 0; j < y1; j++)
		{
			cin >> a[i][j];
	    }
	}
	cin >> x2 >> y2;
	for (m = 0; m < x2; m++)
	{	
		for (n = 0; n < y2; n++)
		{
			cin >> b[m][n];
	    }
	}
	for (i = 0; i < x1; i++)
	{	
		for (j = 0; j < y2; j++)
		{
			for (t = 0; t < x2; t++)
			{
				c[i][j] = c[i][j] + a[i][t] * b[t][j];
			}
	    }
	}
	for (i = 0; i < x1; i++)
	{	
		for (j = 0; j < y2 - 1; j++)
		{
             cout << c[i][j] << " ";
	    }			 
		cout << c[i][y2 - 1] << endl;
	}
	return 0;
}