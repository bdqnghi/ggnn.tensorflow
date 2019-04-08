
int main()
{
	char str[501];
	int l;
	int cnt;

	cin >> str;
	l = strlen(str);
	for (int i = 2; i <= l; i++)
		for (int j = 0; j <= l - i; j++)
		{
			cnt = 0;
			for (int k = 0; k <= i - 1; k++)
				if (str[j + k] == str[j + i - 1 - k])
					cnt++;
			if (cnt == i)
			{
				for (int k = j; k <= j + i - 2; k++)
					cout << str[k];
				cout << str[j + i - 1] << endl;
			}
		}
	return 0;
}