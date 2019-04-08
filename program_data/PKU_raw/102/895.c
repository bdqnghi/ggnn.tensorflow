
int main()
{
	int n, i, j = 1, k = 1;
	cin >> n;
	char sex[40][10];
	double male[40], female[40];
	for (i = 1; i <= n; i++)
	{
		cin >> sex[i];
		if (sex[i][0] == 'm')
		{
			 cin >> male[j];
			 j++;
		}
		else
		{
			cin >> female[k];
			k++;
		}
	}
	int j0 = j - 1, k0 = k - 1;
	for (k = 1; k <= j0; k++)
	{
		for (i = 1; i <= j0 - k; i++)
		{
			if (male[i] > male[i+1])
			{
				male[0] = male[i];
				male[i] = male[i+1];
				male[i+1] = male[0];
			}
		}
	}
	for (k = 1; k <= k0; k++)
	{
		for (j = 1; j <= k0 - k; j++)
		{
			if (female[j] < female[j+1])
			{
				female[0] = female[j];
				female[j] = female[j+1];
				female[j+1] = female[0];
			}
		}
	}
	for (i = 1; i <= j0; i++)
	{
		cout << fixed << setprecision(2) << male[i] << " ";
	}
	for (j = 1; j < k0; j++)
	{
		cout << fixed << setprecision(2) << female[j] << " ";
	}
	cout << fixed << setprecision(2) << female[j];

return 0;
}