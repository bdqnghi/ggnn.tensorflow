
int main()
{
	char a[260], b[260], c[260];
	int i, t, j, s, len, len1;
	cin >> a >> b >> c;
	len1 = strlen(a);
	len = strlen(b);
	for (i = 0; i <= len1 - len; i++)
	{
		t = 1;
		for (j = 0; j < len; j++)
			if (a[i + j] != b[j])
				t = 0;
		if (t == 1)
		{
			s = i;
			break;
		}
	}
	if (t == 1)
	{
		for (i = 0; i < s; i++)
			cout << a[i];
		cout << c;
		for (i = s + len; i < len1; i++)
			cout << a[i];
	}
	else
		cout << a;
	cout << endl;

	return 0;
}

