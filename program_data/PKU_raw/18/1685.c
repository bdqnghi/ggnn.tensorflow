
int main()
{
	int num;
	cin >> num;
	int n = num, numcas = num;
	
	int a[301][301];
	while (num--)
	{
		int s = 0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < numcas; i++)
		for (int j = 0; j < numcas; j++)
		{
			cin >> a[i][j];
		}
		
		n = numcas;
		while (1)
		{
			
			if (n == 0) {cout << s << endl; break;}	

			
			for (int j  = 0; j < n ; j++)
			{
				int min = 1000000;
				for (int k = 0;k < n; k++)
				{
					if (a[j][k] < min) min = a[j][k];
				}				
				for (int i = 0; i < n; i++) a[j][i] -= min;
			}
							/*	for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) 
			{
				cout << a[j][i] << " ";
			}
			cout << endl;
			}*/
			for (int j  = 0; j < n ; j++)
			{
				int min = 1000000;
				for (int k = 0;k < n; k++)
				{
					if (a[k][j] < min) min = a[k][j];
				}				
				for (int i = 0; i < n; i++) a[i][j] -= min;
			}
			

			
			s += a[1][1];
			
			for (int j = 0; j < n; j++)
			for (int i = 1; i < n; i++)
			{
				a[j][i] = a[j][i+1];
			}		
			for (int j = 0; j < n - 1; j++)
			for (int i = 1; i < n; i++)
			{
				a[i][j] = a[i+1][j];
			}
			n--;
		}
	}

	return 0;
} 
