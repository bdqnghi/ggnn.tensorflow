int main()
{
	char a[500];
	int len, i, j, k;
	cin >> a;
	len = strlen(a);
	for (i = 2; i <= len; i++)
		for (j = 0; j <= len - i; j++)
		{
			for (k = 0; k < i / 2; k++)
			{
				if (a[j + k] != a[j + i - 1 - k])
				{	
					k = -1;break;
				}
			}
			if (k != -1)
			{
				for (k = j; k < j + i; k++)
					cout << a[k];
				cout << endl;
			}

		}
	return 0;
}