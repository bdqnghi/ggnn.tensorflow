//?????????//
char cnum[100];
int inum[100];
int cal();
int main ()
{
	memset(cnum, '0', sizeof(cnum));
	memset(inum, 0, sizeof(inum));
	cnum[0] = '1';
	int len;
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "1" << endl;
		return 1;
	}
	for (int i = 1; i <= n; i++)
	{
		len = cal();
	}
	for (int i = len; i >= 0; i--)
		cout << cnum[i];
	cout << endl;
	return 0;
}
int cal()
{
	int i;
	for (i = 0; i < 100; i++)
		inum[i] = cnum[i] - '0';
	for (i = 0; i < 100; i++)
		inum[i] *= 2;
	for (i = 0; i < 100; i++)
	{
		if (inum[i] >= 10)
		{
			inum[i] -= 10;
			inum[i + 1]++;
		}
	}
	for (i = 0; i < 100; i++)
		cnum[i] = inum[i] + '0';
	for (i = 99; i >= 0; i--)
		if (inum[i] != 0)
			break;
	return i;
}

