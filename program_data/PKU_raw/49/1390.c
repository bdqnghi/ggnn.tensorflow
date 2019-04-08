int main()
{
	char c[505];
	cin >> c;
	int i, j, len;
	len = strlen(c);
	for (i = 2; i < len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			int k, l, flag = 1;
			for (k = j, l = j + i - 1; k < j + i - 1, l > j; k++, l--)
			{
				if (c[k] != c[l])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				for (int a = j; a < j + i; a++)
					cout << c[a];
				cout << endl;
			}
		}
	}
	return 0;
}