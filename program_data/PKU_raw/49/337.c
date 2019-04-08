void s(char[], int, int);
int main()
{
	char a[1000];
	cin .getline(a, 1000);
	int len = strlen(a);
	s(a, 1, len);
	return 0;
}
void s (char a[1000], int n, int len)
{
	if (n > len / 2)
		return;
	else
	{
		for (int i = 0; i + 2 * n - 1 < len; i++)
		{
			int flag = 1;
			for (int j = n; j > 0; j--)
			{
				if (a[i + n - j] != a[i + j + n - 1])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (int m = i; m <= i + 2 * n - 1; m++)
					cout << a[m];
				cout << endl;
			}
		}
		s (a, n + 1, len);
	}
}

