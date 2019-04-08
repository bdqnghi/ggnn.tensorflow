
int main (void)
{
	int n = 0, k = 0, i = 1 , j = 0,b = 0;
	cin >> n >> k;

	int a[1000];

	for (i = 1; i <= n; ++i)
	{
		cin >> a[i-1];
	}

	for (i = 0; i <= (n - 2); i++)
		for (j = i+1; j <= (n-1); j++ )
		{
			if (k == a[i]+a[j])
				b = 1;
		}

	if (b == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}