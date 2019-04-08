int main()
{
	int n, a[20000], b[91], count = 0, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (a[i] == a[j])
				break;
		}
		if (i == j)
		{
			count++;
			b[count] = a[i];
			if(count == 90)
				break;
		}
		if (count == 90)
			break;
	}
	if (count > 1)
	{
		for (i = 1; i <= count - 1; i++)
			cout << b[i] << " ";
		cout << b[count] << endl;
	}
	else if (count == 1)
		cout << b[1] << endl;
	return 0;
}