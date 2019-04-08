int main()
{
	const int maxlen = 202;
	char szline1[maxlen];
	char szline2[maxlen];
	int an1[maxlen];
	int an2[maxlen];
	cin.getline(szline1, maxlen);
	cin.getline(szline2, maxlen);
	int len1 = strlen(szline1);
	int len2 = strlen(szline2);
	memset(an1, 0, sizeof (an1));
	memset(an2, 0, sizeof(an2));
	for (int i = len1 - 1, j = 0; i >= 0; i --)
		an1[j ++] = szline1[i] - '0';
	for (int i = len2 - 1, j = 0; i >= 0; i --)
		an2[j ++] = szline2[i] - '0';
	int begin;
	for (int i = 0; i < maxlen; i ++)
	{
		an1[i] += an2[i];
		if (an1[i] >= 10)
		{
			an1[i] -= 10;
			an1[i + 1] ++;
		}
		if (an1[i])
			begin = i;
	}
	for (int i = begin; i >= 0; i --)
		cout << an1[i];
	cout << endl;
	return 0;
}