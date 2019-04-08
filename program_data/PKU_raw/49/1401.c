int main ()
{
	char str[501];
	cin >> str;
	int len = strlen(str);
	int i=0, n=0, m=0, k=0, j=0,flag=0;
	for (i = 2; i <= len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			for (n = j, m = i + j - 1; n < m; n++, m--)
			{
				flag = 1;
				if (str[n] != str[m])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (k = j; k <= i + j - 1; k++)
					cout << str[k];
				cout << endl;
			}
		}
	}
	return 0;
}