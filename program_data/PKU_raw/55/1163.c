
void preProcess(char *p)
{
	for (int i = 0; i < strlen(p); i++)
	{
		if (*(p + i) - 'a' >= 0 && *(p + i) - 'z' <= 0)
		{
			*(p + i) = '0' + (*(p + i) - 'a' + 10);
			continue;
		}
		if (*(p + i) - 'A' >= 0 && *(p + i) - 'Z' <= 0)
		{
			*(p + i) = '0' + (*(p + i) - 'A' + 10);
			continue;
		}
	}
}

int main()
{
	int m, n;
	char sOrig[200], sRes[200];

	cin >> m >> sOrig >> n;

	preProcess(sOrig);

	//cout << sOrig << endl;

	int nValue = 0;

	char *p = sOrig;
	while (*p != '\0')	nValue = nValue * m + *p++ - '0';

	char *s = sRes;
	if (nValue == 0)
	{
		*s++ = '0';
	}
	while (nValue)
	{
		if (nValue % n < 10)	*s++ = nValue % n + '0';
		else	*s++ = nValue % n - 10 + 'A';
		nValue /= n;
	}
	*s-- = '\0';

	while(s >= sRes)	cout << *s--;
	cout << endl;

	return 0;
}