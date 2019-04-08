//??????
void change(int a[][100], int n, int sum)
{
	int i, j, min1, min2;
	if(n == 1)
	{
		cout << sum << endl;
		return ;
	}
	else 
	{
		
		for(i = 0; i < n; i++)
		{
			min1 = 10000;
			for(j = 0; j < n; j++)
			{
				if(min1 > a[i][j])
					min1 = a[i][j];
			}
			for(j = 0; j < n; j++)
				a[i][j] -= min1;
		}
		
		for(i = 0; i < n; i++)
		{
			min2 = 10000;
			for(j = 0; j < n; j++)
			{
				if(min2 > a[j][i])
					min2 = a[j][i];
			}
			for(j = 0; j < n; j++)
				a[j][i] -= min2;
		}
		sum += a[1][1];
		for(i = 1; i < n - 1; i++)
			for(j = 0; j < n; j++)
				a[i][j] = a[i + 1][j];
		for(i = 1; i < n - 1; i++)
			for(j = 0; j < n; j++)
				a[j][i] = a[j][i + 1];
			change( a,  n - 1,  sum);
	}
}
int main ()
{
	int n, a[100][100], i, j, k, sum;	
	cin >> n;
	for(i = 0; i < n; i++)
	{
		sum = 0;
		for(j = 0; j < n; j++)
			for(k = 0; k < n; k++)
		cin >> a[j][k];
			change(a, n, sum);
	}
	return 0;
}
			
		