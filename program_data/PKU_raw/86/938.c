int num (int m, int a[])
{
	int i, time = 0, count = 0;
	for(i = 0; ;i++)
	{
		if(m == 0)
			return 60;
		else
		{
			time = time + a[i];
			if(time < 60)
			{
				time = time + 3;
				count++;
				if(time < 60)
				{
					if(count < m)
					{
						time = time - a[i];
					}
					else
						return a[i] + 60 - time;

				}
				else
					return a[i];

			}
			else
				return (a[i] - (time - 60));
		}
	}

}
int main()
{
	int n, i, m, j;
	int a[15] = {0};
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		memset(a, 0, sizeof(a));
		cin >> m;
		for(j = 0; j < m; j++)
			cin >> a[j];
		cout << num (m, a) << endl;
		
	}

	return 0;

}

