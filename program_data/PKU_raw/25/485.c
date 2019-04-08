
char a[10002];
int b[10001] = {0};

int main()
{
	int N, i, j, k, t;
	cin >> N;
	if (N == 0)
	{
		cout << 1;
		return 0;
	}
	for (i = 0; i < 10000; i++)
		a[i] = '0';
	a[i] = '2';
	for (i = 1; i < N; i++)
	{
		k = 10000;
		for (t = 0; t < 10001; t++)
			b[t] = 0;
		for (j = 0; j < 10001; j++)
			if (a[j] != '0')
				break;
		while(k >= j)
		{
			if ((a[k] - '0') * 2 + b[k] < 10)
				a[k] = (a[k] - '0') * 2  + b[k] + 48;
			else
			{
				b[k-1] = 1;
				if (k == j)
					a[k-1] = b[k-1] + 48;
				a[k] = (a[k] - '0') * 2 + 38 + b[k];
			}
			k--;
		}
	}
	for (i = 0; i < 10001; i++)
		if (a[i] != '0')
			break;
	for (j = i; j < 10001; j++)
		cout << a[j];
	return 0;
}