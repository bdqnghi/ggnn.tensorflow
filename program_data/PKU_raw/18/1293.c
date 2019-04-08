//********************************
//*???????   **
//*????? 1200012917 **
//*???2012.11.24  **
//********************************
int a[101][101] = {0};
int min1(int b[101][101], int i, int n)
{
	int min = b[i][0];
	for (int j = 1; j < n; j++)
	{
		if (min > b[i][j])
		{
			min = b[i][j];        
		}
	}
	return min;
}
int min2(int b[101][101], int i, int n)
{
	int min = b[0][i];
	for (int j = 1; j < n; j++)
	{
		if (min > b[j][i])
		{
			min = b[j][i];        
		}
	}
	return min;
}
int sum(int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = min1(a, i, n);
		/*int min = a[i][0];
		for (int j = 1; j < n; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];        
			}
		}*/
		for (int j = 0; j < n; j++)
		{
			a[i][j] -= min;          //??????????
		}
	}
	for (int i = 0; i < n; i++)
	{
		int min = min2(a, i, n);
		/*int min = a[0][i];
		for (int j = 1; j < n; j++)
		{
			if (min > a[j][i])
			{
				min = a[j][i];         
			}
		}*/
		for (int j = 0; j < n; j++)
		{
			a[j][i] -= min;            //????????
		}
	}
	if (n == 2)
	{
		return a[1][1];                //??n = 2,??????2????????a[1][1]
	}
	else
	{
		int k = a[1][1];               //????????????
		for (int i = 1; i < n - 1; i++)
		{
			a[0][i] = a[0][i + 1];
			a[i][0] = a[i + 1][0];
			for (int j = 1; j < n - 1; j++)
			{
				a[i][j] = a[i + 1][j + 1];  //????????????????
			}
		}
		return k + sum(n - 1);             
	}
}
int main()
{
	int n, i, j, k;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
			cout << sum(n) << endl;
	}
	return 0;
}	
