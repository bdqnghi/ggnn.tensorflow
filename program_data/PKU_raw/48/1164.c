int main()
{
	int a[9][9] ={0, 0};
	int n, day;
	
	cin >> n >> day;
	
	a[4][4] = n;
	
	for(int i = 1; i <= day; i ++)
	{
		int b[9][9] = {0, 0};
	
		for(int j = 0; j < 9; j ++)
		for(int k = 0; k < 9; k++)
		{
			if(a[j][k] != 0)
			{
				b[j][k] += a[j][k];
				b[j - 1][k - 1] += a[j][k];
				b[j - 1][k] += a[j][k];
				b[j - 1][k + 1] += a[j][k];
				b[j][k - 1] += a[j][k];
				b[j][k + 1] += a[j][k];
				b[j + 1][k - 1] += a[j][k];
				b[j + 1][k] += a[j][k];
				b[j + 1][k + 1] += a[j][k];
			}
		}
		
		for(int j = 0; j < 9; j ++)
		for(int k = 0; k < 9; k ++)
		a[j][k] += b[j][k];
	}
	
	for(int i = 0; i < 9; i ++)
	{
		cout << a[i][0];
		
		for(int j = 1; j < 9; j ++)
		cout << " " << a[i][j];
		
		cout << endl;
	}
	
	return 0;
}