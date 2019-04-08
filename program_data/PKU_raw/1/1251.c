int t(int, int);
int s, j, k1;

int main()
{
	int a, n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		s = 1;
		k1 = 0;
		for (j = 2; j <= sqrt((double) a); j++)
		{
			if (a % j == 0)
				t(a / j, j);
		}
		cout << s << endl;
	}
	return 0;
}

int t(int a, int b)
{
	int k;
	for (k = b; k <= a; k++)
	{
		if (a % k == 0)
		{
			if (a / k == 1)
			{
				s = s + 1;
				break;
			}
			t(a / k, k);
		}
	}
	return 0;
}