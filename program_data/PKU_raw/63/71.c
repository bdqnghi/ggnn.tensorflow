int main()
{
	int x1, y1, x2, y2;
	int s = 0;
	int a[101][101];
	int b[101][101];
	int result[101][101];
	int i, j, k;
	cin >> x1 >> y1;
	for(i = 1; i <= x1; i++)
	{
		for(j = 1; j <= y1; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for(i = 1; i <= x2; i++)
	{
		for(j = 1; j <= y2; j++)
		{
			cin >> b[i][j];
		}
	}
	for(i = 1; i <= x1; i++)
	{
		for(j = 1; j <= y2; j++)
		{
			for(k = 1; k <= y1; k++)
			{
				s = a[i][k] * b[k][j] + s;
			}
			result[i][j] = s;
			s = 0;
		}
	}
	for(i = 1; i <= x1; i++)
	{
		for(j = 1; j <= y2; j++)
		{
			if(j != y2)
			    cout << result[i][j] << " ";
			else
			{
				if(i != x1)
				    cout << result[i][j] << endl;
				else
					cout << result[i][j];
			}
		}
	}
	return 0;
}