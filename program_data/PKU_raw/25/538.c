int main()
{
	char a[1000000];
	int N, i, j;
	cin >> N;
	for(i = 0;i < 1000000;i++)
		a[i] = '0';
	a[0] = '2';
	int count = 1;
	if(N == 0)
		cout << 1;
	else
	{
		for(i = 0;i < N-1;i++)
		{
			for(j = 0;j < 1000000;j++)
			{
				a[j] = (a[j] - '0')* 2;
			}
			for(j = 0;j < 1000000;j++)
			{
				if(a[j] > 9)
				{
					a[j] = a[j] - 10 + '0';
					a[j+1]++;
				}
				else
				{
					a[j] = a[j] + '0';
				}
			}
		}
		int first = 0;
		for(i = 999999;i>=0;i--)
		{
			if(a[i] != '0' || first == 1)
			{
				first = 1;
				cout << a[i];
			}
		}
	}
	return 0;
}
