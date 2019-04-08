
int main()
{
	int n, s;
	cin >> n;
	for (int i = 3; i <= n / 2; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && j != i)
			{
				break;
			}
			if (j == i)
			{
				s = n - i;
				for (int k = 2; k <= s; k++)
				{
					if (s % k == 0 && s != k)
					{
						break;
					}
					if (s == k)
					{
						cout << i << ' ' << s << endl;
					}
				}
			}
		}
	}
return 0;
}