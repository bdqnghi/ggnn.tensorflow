int main()
{
	int n, a[50];
	cin >> n;
	if (n == 0)
		cout << 0;
	for (int i = 3; i >= 0; i--)
	{
		if (n / ((int)(pow(10.0, i))))
		{
			for (int j = i; j >= 0; j--)
			{
				a[j] = (int)n / (int)(pow(10.0,j));
				n = n - a[j] * pow (10.0, j);
			}
			for (int k = 0; k <= i; k++)
			{
				cout << a[k];
			}
			break;
		}

	}
	return 0;

}