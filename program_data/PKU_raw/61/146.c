int main()
{
	int n, k;
	int a, b, c;
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a = b = 1;
		cin >> k;
		if (k == 1 || k == 2)
			cout << "1" << endl;
		for (j = 3; j <= k; j++)
			{
				if (j % 3 == 0)
				{
					c = a + b;
					if (j == k)
						cout << c << endl;
				}
				if (j % 3 == 1)
				{
					a = b + c;
					if (j == k)
						cout << a << endl;
				}
				if (j% 3 == 2)
				{
					b = a + c;
					if (j == k)
						cout << b << endl;
				}
			}
	}
	return 0;
}
			
