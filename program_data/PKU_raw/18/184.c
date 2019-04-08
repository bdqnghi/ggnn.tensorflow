void rezero();
void dele();
int a[100][100], n, b, sum = 0;
int main()
{
	int i, j, k;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			for(k = 0; k < n; k++)
				cin >> a[j][k];
		b = n;
		rezero();
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}
void rezero()
{
	int i, j, k, min;
	for(k = 0; k < n - 1; k++)
	{
		for(i = 0; i < b; i++)
		{
			min = a[i][0];
			for(j = 0; j < b; j++)
			{
				if(a[i][j] <= min)
					min = a[i][j];
			}
			for(j = 0; j < b; j++)
			{
				a[i][j] -= min;
			}
		}
	for(i = 0; i < b; i++)
	{
		min = a[0][i];
		for(j = 0; j < b; j++)
		{
			if(a[j][i] <= min)
				min = a[j][i];
		}
		for(j = 0; j < b; j++)
		{
			a[j][i] -= min;
		}
	}
	dele();
	b -= 1;
	}
}
void dele()
{
	int i, j;
	sum += a[1][1];
	for(i = 0; i < b; i++)
		for(j = 1; j < b - 1; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	for(j = 0; j < b - 1; j++)
		for(i = 1; i < b - 1; i++)
		{
			a[i][j] = a[i + 1][j];
		}	
}