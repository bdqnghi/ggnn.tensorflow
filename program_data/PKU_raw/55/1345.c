//*******************************************************
//*11.11??  ????                                  *
//*?????  ?? 1100012844                          *
//*???2011?11?11?                                 *
//*******************************************************
int atoDec(int i, char a[])
{
	int Dec = 0, k;
	for (k = 0; a[k] != '\0'; k++)
	{
		if (a[k] >= '0' && a[k] <= '9')
			Dec = Dec * i + a[k] - '0';
		if (a[k] >= 'A' && a[k] <= 'Z')
			Dec = Dec * i + a[k] - 'A' + 10;
		if (a[k] >= 'a' && a[k] <= 'z')
			Dec = Dec * i + a[k] - 'a' + 10;
	}
	return Dec;
}
int main()
{
	char o[100], f[100];
	int a, b, temp, r, j = 99, m;
	cin >> a;
	cin.get();
	cin >> o;
	cin >> b;
	temp = atoDec(a, o);
	if (temp != 0)
	{
		while (temp != 0)
		{
			r = temp % b;
			if (r < 10)
			{
				f[j] = r + '0';
				j--;
			}
			else
			{
				f[j] = r - 10 + 'A';
				j--;
			}
			temp = temp / b;
		}
		for (m = j + 1; m <= 99; m++)
			cout << f[m];
	}
	else
		cout << "0";
	return 0;
}