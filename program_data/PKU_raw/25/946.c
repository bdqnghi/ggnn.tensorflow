char *mul(char *, char *);

int main()
{
	char str1[100000] = "1", str2[100000];
	int n, i;
	int length = strlen(str2);
	char *q = str1, *p = str2;;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		q = str1;
		p = mul(str1, str2);
		p--;
		for (; p >= str2; p--)
		{
			*q = *p;
			q++;
		}
	}
	cout << str1 << endl;
	return 0;
}
char *mul(char *num, char *str2)
{
	int length = strlen(num);
	char *p, *q;;
	p = num + length - 1;
	q = str2;
	int i, n = 0, m = 0, k = 0;
	for (i = 0; i < length; i++)
	{
		n = *p - '0';
		n = n * 2 + m;
		k = n % 10;
		m = n / 10;
		*q = k + '0';
		if (i != length - 1)
			p--;
		q++;
	}
	if (m != 0)
	{
		*q = m + '0';
		q++;
	}
	*q = '\0';
	return q;
}