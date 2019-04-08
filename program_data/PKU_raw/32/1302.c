int main()
{
	char c[101], d[101];
	int i[101] = {0}, j[101] = {0}, tmp, flag;
	int n;
	cin >> n;
	for (int m = 0; m < n; m++)
	{
		for (int k = 0; k < 101; k++)
	{
		c[k] = d[k] = '0';
		i[k] = j[k] = 0;
	}
	cin >> c >> d;
	for (int k = strlen(c) - 1; k >= 0; k--)
	{
		i[k] = c[k] - '0';
	}
	for (int k = strlen(d) - 1; k >= 0; k--)
	{
		j[k + strlen(c) - strlen(d)] = d[k] - '0';
	}
	for (int l = strlen(c) - 1; l >= 0; l--)
	{
		tmp = i[l] - j[l];
		if (tmp < 0)
		{
			tmp += 10;
			i[l - 1]--;
		}
		i[l] = tmp;
	}
	for (int k = 0; k < strlen(c); k++)
	{
		if (i[k] > 0)
		{
			flag = k;
			break;
		}
	}
	for (int k = flag; k < strlen(c); k++)
	{
		cout << i[k];
	}
	cout << endl;
	}
	return 0;
}