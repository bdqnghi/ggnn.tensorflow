int main()
{
	int a[100][100] = {0},r,c,i,j,k = 1;
	cin >> r >> c;
	for(i = 1;i <= r;i++)
	{
		for(j = 1;j <= c;j++)
		{
			cin >> a[i][j];
		}
	}
	while((r >= 2)&&(c >= 2))
	{
		for(i = k;i <= c+k-1;i++)
		{
			cout << a[k][i] << endl;
		}
		for(i = k + 1;i <= r+k-1;i++)
		{
			cout << a[i][c+k-1] << endl;
		}
		for(i = c+k-2;i >= k;i--)
		{
			cout << a[r+k-1][i] << endl;
		}
		for(i = r+k-2;i >= k+1;i--)
		{
			cout << a[i][k] << endl;
		}
		k++;
		r = r - 2;
		c = c - 2;
	}
	if((r == 1)&&(c != 1))
	{
		for(i = k;i <= c+k-1;i++)
		{
			cout << a[k][i] << endl;
		}
	}
	if((c == 1)&&(r != 1))
	{
		for(i = k;i <= r+k-1;i++)
		{
			cout << a[i][c+k-1] << endl;
		}
	}
	if((r == 1)&&(c == 1))
	{
		cout << a[k][k] << endl;
	}
	return 0;
}
	
	
	