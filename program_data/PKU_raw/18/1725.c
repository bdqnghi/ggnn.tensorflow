int main()
{
	int n;		//n?n*n??
	cin >> n;
	for (int af = 1; af <= n ; af ++)
	{
		int sum = 0;
		int a[100][100];
		for (int i = 0 ; i <= n - 1 ; i ++)
			{
				for (int j = 0 ; j <= n - 1; j ++)
					cin >> a[i][j];
			}
		for (int tempn = n ; tempn >= 2 ; tempn --)
		{

			for (int i = 0 ; i <= tempn - 1; i++)		//???????
			{
				int mini = a[i][0];
				for (int j = 1 ; j <= tempn - 1 ; j++)
				{
					if (mini > a[i][j])
						mini = a[i][j];
				}
				for (int j = 0 ; j <= tempn - 1; j++)
					a[i][j] -= mini;
			}
			for (int j = 0 ; j <= tempn - 1; j++)		//???????
			{
				int minj = a[0][j];
				for (int i = 1; i <= tempn - 1 ;i ++)
				{
					if (minj > a[i][j])
						minj = a[i][j];
				}
				for (int i = 0 ;i <= tempn - 1 ; i++)
					a[i][j] -= minj;
			}
			sum += a[1][1];								//??a[1][1]
			for (int i = 2 ; i <= tempn - 1; i++)
				a[i-1][0] = a[i][0];
			for (int j = 2 ; j <= tempn - 1; j++)
				a[0][j-1] = a[0][j];
			for (int i = 2 ; i <= tempn - 1; i++)
			{
				for (int j = 2 ; j <= tempn - 1 ; j++)
					a[i-1][j-1] = a[i][j];
			}
		}
		cout << sum << endl;
	}
	cin.get();
	cin.get();
	return 0;
}