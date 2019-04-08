int main()
{
	char A[300] = {0}, B[300] = {0};
	int a[300], b[300], i, j, k, n, len1, len2, c[300];
	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	cin >> A >> B;
	for (i = 0; A[i] != 0; i++);
	len1 = i;
	for (i = 0; B[i] != 0; i++);
	len2 = i;
	if (A[0] == '0' && B[0] == '0' && len1 == len2 && len1 == 1)
	{
		cout << '0' << endl;
	}
	else
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		if (len2 > len1)
		{
			j = 0;
			for (i = len2 - 1; i >= 0; i--)
			{
				a[j] = B[i] - '0';
				j++;
			}
			j = 0;
			for (i = len1 - 1; i >= 0; i--)
			{
				b[j] = A[i] - '0';
				j++;
			}
			int t = len1;
			len1 = len2;
			len2 = t;
		}
		else
		{
			j = 0;
			for (i = len1 - 1; i >= 0; i--)
			{
				a[j] = A[i] - '0';
				j++;
			}
			j = 0;
			for (i = len2 - 1; i >= 0; i--)
			{
				b[j] = B[i] - '0';
				j++;
			}
		}
		for (i = 0; i < len1; i++)
		{
			c[i] += (a[i] + b[i]);
			if (c[i] >= 10)
			{
				c[i] = c[i] % 10;
				c[i + 1]++;
			}
		}
		for (i = 299; c[i] == 0; i--);
		if (i == -1)
			cout << '0' << endl;
		else
		{
			for (; i >= 0; i--)
				cout << c[i];
			cout << endl;
		}
	}
	return 0;
}