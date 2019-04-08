

int main()
{
	char a[300], b[300], c[300];

	memset(a, '0', sizeof(a));
	memset(b, '0', sizeof(b));
	memset(c, '0', sizeof(c));

	cin.getline(a, 300);
	cin.getline(b, 300);

	int len_a = strlen(a);
	int len_b = strlen(b);
	
	int i, j, temp;
	for (i = 0, j = len_a - 1; i < j; i ++, j --)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0, j = len_b - 1; i < j; i ++, j --)
	{
		temp = b[i];
		b[i] = b[j];
		b[j] = temp;
	}

	//cout << a << endl << b << endl;

	int len = max(len_a, len_b);
	for (i = 0; i < len; i ++)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';
		if (x < 0) x = 0;
		if (y < 0) y = 0;
		int z = x + y + (c[i] - '0');
		if (z < 10)
		{
			c[i] = z + '0';
		}
		else
		{
			c[i + 1] += 1;
			c[i] = z - 10 + '0';
		}
	}

	i = 299;
	while (c[i] == '0' && i >= 0) i --;
	if (i < 0)
		cout << "0" << endl;
	else
	{
		for (; i >= 0; i --)
		{
			cout << c[i];
		}
		cout << endl;
	}

	return 0;
}
