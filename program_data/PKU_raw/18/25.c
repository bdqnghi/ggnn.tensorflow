int mat[100][100], n, sum = 0;
int rmin(int a[][100], int x)
{
	int i, rsmall = a[x][0];
	for(i = 0; i < n; i++)
	{
		if(rsmall > a[x][i])
		{
			rsmall = a[x][i];
		}
	}
	return rsmall;
}
int cmin(int a[][100], int y)
{
	int i, csmall = a[0][y];
	for(i = 0; i < n; i++)
	{
		if(csmall > a[i][y])
		{
			csmall = a[i][y];
		}
	}
	return csmall;
}
void caculate(int mat[][100])
{
	int i, j, rsmall, csmall;
	for(i = 0; i < n; i++)
	{
		rsmall = rmin(mat, i);
		for(j = 0; j < n; j++)
		{
			mat[i][j] -= rsmall;
		}
	}
	for(i = 0; i < n; i++)
	{
		csmall = cmin(mat, i);
		for(j = 0; j < n; j++)
		{
			mat[j][i] -= csmall;
		}
	}
}
void change(int a[][100], int x)
{
	int i, j;
	sum += a[1][1];
	for(i = 0; i < x; i++)
		for(j = 1; j < x - 1; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	for(i = 1; i < x - 1; i++)
		for(j = 0; j < x - 1; j++)
		{
			a[i][j] = a[i + 1][j];
		}
}
int main()
{
	int m, i, j, num;
	cin >> num;	
	for(m = 1; m <= num; m++)
	{
		n = num;
		sum = 0;
		for(i = 0; i < num; i++)
			for(j = 0; j < num; j++)
			{
				cin >> mat[i][j];
			}
		while(n != 1)
		{
			caculate(mat);
			change(mat, n--);
		}
		cout << sum << endl;
	}cin>>i;
	return 0;
}