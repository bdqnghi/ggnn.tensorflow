
int check(int x)
{
	int q = sqrt (x);
	int n = 0;
	int flag =1;
	for (n = 2; n <= q; n ++)
	{
		if (x % n == 0) {
			flag=0; break; }
	}
	return (flag);
}		

int main()
{
	int n = 0;
	int i = 0;
	int k = 0;
	int j = 0;
	
	cin >> n;
	for (i = 6; i <=n; i += 2)
	{
		for (j = 2; j <= i / 2; j ++)
		{
			if (check(j))
			{
				k = i - j;
				if (check(k))
				{
					cout << i << "=" << j << "+" << k << endl;
					j = i / 2 + 1;
				}
			}
		}
	}

	return 0;
}

