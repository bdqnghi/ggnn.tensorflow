/*
???1000012853  ??
???2010.11.20
????
*/
int main()
{
	int x1, y1, x2, y2;
	int i, j, k, l, m, n, z;
	int a[100][100], b[100][100], c[100][100] = {0};
	cin >> x1 >> y1;
	for(i = 0; i < x1; i ++)
	{
		for(j = 0; j < y1; j ++)
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for(i = 0; i < x2;i ++)
	{
		for(j = 0; j < y2; j ++)
		{
			cin >> b[i][j];
		}
	}
	if(y1 == x2)
	{
		for(k = 0; k < x1; k ++)
		{
			for(l = 0; l < x2; l ++)
			{
				for(m = 0; m < y2; m ++)
				{
					c[k][m] += a[k][l] * b[l][m];
				}
			}
		}
	}
	for(n = 0; n < x1; n ++)
	{
		for(z = 0; z < y2; z ++)
		{
			if(z == y2 - 1)
				cout << c[n][z] << endl;
			else
			    cout << c[n][z] << " ";
		}
	}
	return 0;
}