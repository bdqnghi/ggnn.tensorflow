int del(int num[200][200], int n);
int main()
{
	int i, j, k, n, num[200][200] = {0};
	cin>>n;

	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
			for (k = 0; k <= n - 1; k++)

				cin >> num[j][k];
		cout << del(num, n)<< endl;
	}
	return 0;
}
int del (int num[200][200], int n)
{
	int sum = 0, j, i, min = 1000;
	for (j = 0; j <= n - 1; j++)   
	{
		min = 1000;
		for (i = 0; i <= n -1; i++)
		{
			if (num[j][i] < min)
			{
				min = num[j][i];

			}
		}
		
		if (min != 0)
		{
			for (i = 0; i <= n - 1; i++)
				num[j][i] = num[j][i] - min;
		}
	}

	for (j = 0; j <= n - 1; j++)   
	{
		min = 1000;
		for (i = 0; i <= n-1; i++)
		{
			if (num[i][j] < min)
			{
				min = num[i][j];
				if  (min == 0)
					break;
			}
		}		
		if  (min != 0)
		{
			for( i = 0; i <= n - 1; i++)
				num[i][j] = num[i][j] - min;
		}
	}
	sum = sum + num[1][1];
	if (n == 2)                        
		return sum;
	else
	{		
		for(i = 2; i <= n; i++)
		{
			num[0][i-1] = num[0][i];
			num[i-1][0] = num[i][0];
		}
		for(i = 2; i <= n - 1; i++)
			for(j = 2; j <= n - 1; j++)
				num[i-1][j-1] = num[i][j];
		sum= sum + del(num, n-1);
		return sum;
	}
}
