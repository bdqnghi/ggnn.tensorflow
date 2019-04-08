// ????.cpp : ??????????????
//



int main()
{
	int g=0,m,sum = 0,x1,y1,x2,y2,i,j,a[100][100],b[100][100],c[100][100];
	cin >> x1 >> y1;
	for (i = 0;i <= x1 - 1;i++)
	{
		for (j = 0;j <= y1 - 1;j++)
		{
		     cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for (i = 0;i <= x2 - 1;i++)
	{
		for (j = 0;j <= y2 - 1;j++)
		{
		     cin >> b[i][j];
		}
	}
	if (y2 != 1)
	{
	for (i = 0;i <= x1-1;i++)
	{
		for (j = 0;j <= y2-1;j++)
		{
			c[i][j] = 0;
			for (m = 0;m <= x2-1;m++)
			{
				c[i][j] = c[i][j] + a[i][m] * b[m][j];
			}
			if (j == 0)
			{
				cout << c[i][j];
			}
			if (j != 0 && j != y2 - 1)
			{
				cout << " " << c[i][j];
			}
			if (j == y2 - 1  && y2 - 1 != 0)
			{
				cout << " " << c[i][j] << endl;
			}
		}
	}
	}
	if (y2 == 1)
	{
        for (i = 0;i <= x1-1;i++)
	    {
			c[i][0] = 0;
			for (m = 0;m <= x2-1;m++)
			{
				c[i][0] = c[i][0] + a[i][m] * b[m][0];
			}
            if (c[i][0] != 0)
			{
				g=1;
			}
		}
	if (g == 1)
	{
		for (i = 0;i <= x1-1;i++)
		{
			cout << c[i][0] << endl;
		}
	}
	if (g == 0)
	{
		cout << "0" << endl;
	}
	}
	return 0;
}