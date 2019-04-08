//3.cpp n-gram????
//?? 1300013016
char b[505][505];
int main()
{
	int n, t = 0, s[505] = { 0 }, num;
	cin >> n;//????
	char a[505];
	cin >> a;//?????
	int len = strlen(a);//????????
	for (int i = 0; i <= len - n; i++)
	{
		char *p = &a[i];
		while (t < n)
		{
			b[i][t++] = *(p++);
		}
		b[i][t] = '\0';
		t = 0;
		num = i;
	}
	for (int i = 0; i <= num; i++)
	{
		for (int j = i + 1; j <= num; j++)
		{
			if (strlen(b[j]) == n)
			{
				if (strcmp(b[i], b[j]) == 0)
				{
					s[i]++;
					b[j][n] = ' ';
				}
			}
		}
	}
	int max = 0;
	for (int i = 0; i <= num; i++)
	{
		if (max < s[i])
		{
			max = s[i];
		}
	}
	if (max == 0)
		cout << "NO" << endl;
	else
	{
		cout << max + 1 << endl;
		for (int i = 0; i <= num; i++)
		{
			if (s[i] == max)
			{
				cout << b[i] << endl;
			}
		}
	}
	return 0;
}