void huiwen(int i, int l, char a[501])
{
	int j, k, flag = 0;
	for (j = 0; j <= l - i; j ++)
	{
		flag = 1;
		for (k = 0; k <= i - 1; k ++)
		{
			if (a[j+k] != a[j+i-1-k])
				flag = 0;
		}
		if (flag)
		{
			for (k = 0; k <= i - 1; k ++)
				cout << a[j+k];
			cout << endl;
		}
	}
}
int main()
{
	char a[501];
	cin >> a;
	int i, l;
	l = strlen(a);
	for (i = 2; i <= l; i ++)
	{
		huiwen(i, l, a);
	}
	return 0;
}
