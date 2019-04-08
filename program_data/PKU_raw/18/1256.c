

void Sort(int a[][100],int n)
{
	int i, j;
	for (i = 0;i < n ;i++)
	{
		for (j = 1;j < n - 1;j++)
		{
			a[i][j] = a[i][j + 1];
		}
	}
	for (i = 0;i < n;i++)
	{
		for (j = 1;j < n - 1;j++)
		{
			a[j][i] = a[j + 1][i];
		}
	}
	
}


void Change(int a[][100],int n)
{
	int i, j, l[100] = {0}, r[100] = {0};
	for (i = 0;i < n;i++)
		{
			l[i] = a[i][0];
			for (j = 1;j < n;j++)
			{
				l[i] = l[i] > a[i][j] ? a[i][j] : l[i];
			}
		}
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				a[i][j] = a[i][j] - l[i];	
			}
		}
		for (i = 0;i < n;i++)
		{
			r[i] = a[0][i];
			for (j = 1;j < n;j++)
			{
				r[i] = r[i] > a[j][i] ? a[j][i] : r[i];
			}
		}
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				a[j][i] = a[j][i] - r[i];	
			}
		}
		
}

int main()
{
	int a[100][100],i, j, n, l ,r;
	cin >> n;
	for (int k = 1;k <= n;k++)
	{
		int sum = 0;
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				cin >> a[i][j];
				
			}
		}


	
		
		for (i = n;i >= 2;i--)
		{
			Change(a, i);
			
			sum+= a[1][1];
		    Sort(a, i);
			
		}
		cout << sum << endl;
	}
	
	return 0;
}



	