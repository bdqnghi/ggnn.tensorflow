int main()
{
	int n;
	char a[200];
	int len;
	int p = 0,q = 0;
	memset(a,0,sizeof(a));
	a[0] = '2';
	cin >> n;
	if (n == 0)
		cout << "1" << endl;
	else
	{
		for (int i = 1; i < n; i++)
		{
			len = strlen(a);
			for (int j = 0; j < len; j++)
			{
				p = a[j] - '0';
				a[j] = (char) ((p * 2) % 10 + '0' + q);
				q = (p * 2) / 10;
			}
			if (q > 0)
				a[len] = (char) (q + '0');
			p = 0;
			q = 0;
		}
		len = strlen(a);
		for (int i = len - 1; i >= 0; i--)
			cout << a[i];
	}
	return 0;
}