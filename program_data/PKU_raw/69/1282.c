int main()
{
	char a[260];
	char b[260];
	char tmp[260];
	int i, j;
	for (i = 0;i < 260;i++)
	{
		a[i] = '0';
		b[i] = '0';
	}
	cin >> tmp;
	int lena = strlen(tmp);
	for (j = 0;j < lena;j++)
	{
		if (tmp[j] != '0')
			break;
	}
	for (i = j;i < lena;i++)
		a[i-j] = tmp[lena - (i-j) - 1];
	cin >> tmp;
	lena -= j;
	int lenb = strlen(tmp);
	for (j = 0;j < lenb;j++)
		if (tmp[j] != '0')
			break;
	for (i = j;i < lenb;i++)
		b[i-j] = tmp[lenb - (i-j) - 1];
	lenb -= j;


	int c = 0;
	int len = lena > lenb ? lena : lenb;
	for (i = 0;i < 260;i++)
	{
		if (a[i] - '0' + b[i] - '0' + c > 9)
		{
			a[i] = a[i] - '0' + b[i] - '0' + c - 10 + '0';
			c = 1;
		}
		else
		{
			a[i] = a[i] - '0' + b[i] - '0' + c + '0';
			c = 0;
		}
	}

	if (lena == 0 && lenb == 0)
		cout << 0;
	else
	{
	if (a[len] > '0')
		cout << a[len];
	for (i = len-1;i>= 0;i--)
		cout << a[i];
	}
	cout << endl;
	return 0;
}