

int main()
{
	int a[MAX];
	int b[MAX];
	int r[MAX];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(r, 0, sizeof(r));

	char tmp[MAX];
	int i, len;

	cin >> tmp;
	len = strlen(tmp);
	for (i = 0; i < len; i++)
		a[i] = tmp[len - 1 - i] - '0';

	cin >> tmp;
	len = strlen(tmp);
	for (i = 0; i < len; i++)
		b[i] = tmp[len - 1 - i] - '0';

	for (i = 0; i < MAX; i++)
	{
		int br = r[i] + a[i] + b[i];
		if (br < 10)
			r[i] = br;
		else
		{
			r[i] = br - 10;
			r[i + 1] = 1;
		}
	}
	
	i = MAX - 1;
	while (r[i] == 0 && i > 0)
		i--;

	for (; i >= 0; i--)
		cout << r[i];
	cout << endl;

	return 0;
}