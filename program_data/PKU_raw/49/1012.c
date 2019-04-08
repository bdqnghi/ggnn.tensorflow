//????
int main()
{
	char a[500];
	int i = 0, j = 0, k = 0;
	cin >> a;
	int l = strlen(a);
	for (i = 2; i <= l; i++)
	{
		for (j = 0; j <= l - i; j++)
		{
			int flag = 1;
			for (k = j; k < j + i; k++)
			{
				if (a[k] != a[j + i + j - k - 1])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
			for (k = j; k < i + j; k++)
			{
				cout << a[k];
			}
			cout << endl;
			}
		}
	}
	return 0;
}
