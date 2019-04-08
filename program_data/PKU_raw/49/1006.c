int main()
{
	int i, j, begin, end, flag, p;
	char a[501];
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
		p = i;
	p++;
	for (i = 2; i <= p; i++)
	{
		for (j = 0; j <= p - i; j++)
		{
			flag = 1;
			for (begin = j, end = j + i - 1; end > begin; begin++, end--)
				if (a[begin] != a[end])
				{
					flag = 0;
					break;
				}
			if (flag == 1)
			{
				for (begin = j; begin <= j + i - 1; begin++)
					cout << a[begin];
				cout << endl;
			}
		}
	}
	return 0;
}