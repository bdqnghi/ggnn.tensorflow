int main ()
{
	char c[500];
	int i, j, k, len, flag;
	cin.getline(c,500);
	len = strlen(c);
	for (i = 2; i <= len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			flag = 1;
			for (k = 0; k < (i + 1) / 2; k++)
			{
				if (c[j + k] != c[j + i - 1 - k])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (k = 0; k < i; k++)
					cout << c[j + k];
				cout << endl;
			}
		}
	}
	return 0;
}