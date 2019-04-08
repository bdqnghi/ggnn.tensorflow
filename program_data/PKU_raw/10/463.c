
int k;
int h[25];
int l[25];
int main()
{
	cin >> k;
	int i, j;
	for (i = 0; i < k; i ++)
	{
		cin >> h[i];
		l[i] = 0;
	}
	l[0] = 1;

	for (i = 1; i < k; i ++)
	{
		int temp = -1;
		for (j = 0; j < i; j ++)
		{
			if (h[j] >= h[i] && l[j] + 1 > temp)
				temp = l[j] + 1;
		}
		if (temp == -1)
			l[i] = 1;
		else
			l[i] = temp;
	}
	int res = -1;

	for (i = 0; i < k; i ++)
	{
		if (l[i] > res)
			res = l[i];
	}
	cout << res << endl;


	return 0;
}