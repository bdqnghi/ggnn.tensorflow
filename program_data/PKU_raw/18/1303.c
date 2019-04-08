int a[100][100]; 
int Sum(int n) ;


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				cin >> a[j][k];
		}
		cout << Sum(n) << endl;
		
	}
	return 0;
}




int Sum(int n)
{
	int i, j, min ;
	for ( i = 0; i < n; i++)
	{
		min = a[i][0];
		for ( j = 1; j < n; j++)
			if (a[i][j] < min)
				min = a[i][j];
			for ( j = 0; j < n; j++)
				a[i][j] -= min;
	}
	
	for (  i = 0; i < n ; i++)
	{
		min = a[0][i];
		for ( j = 1; j < n ; j++)
			if (a[j][i] < min)
				min = a[j][i];
			for ( j = 0; j < n ; j++)
				a[j][i] -= min;
	}
	
	if (n == 2) 
		return a[1][1];
	int k = a[1][1];
	for ( i = 1; i < n - 1; i++) 
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for ( j = 1; j < n - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
	return k + Sum(n - 1); 
}