int an1[len + 10];
int an2[len + 10];
char szline1[len + 10];
char szline2[len + 10];
int Add(int maxlen, int* a1, int* a2)
{
	int high = 0;
	for(int i = 0; i < maxlen; i++)
	{
		a1[i] = a1[i] + a2[i];
		if(a1[i] >= 10)
		{
			a1[i] = a1[i] - 10;
			a1[i + 1]++;
		}
	}
	for(int i = maxlen - 1; i >= 0; i--)
		if(a1[i])
		{
			high = i;
			break;
		}
	return high;
}
int main()
{
	cin >> szline1 >> szline2;
	int i, j;
	for(int k = 0; k < len + 10; k++)
	{
		an1[k] = 0;
		an2[k] = 0;
	}
	int len1 = strlen(szline1);
	int len2 = strlen(szline2);
	for(j = 0, i = len1 - 1; i >= 0; i--, j++)
		an1[j] = szline1[i] - '0';
	for(j = 0, i = len2 - 1; i >= 0; i--, j++)
		an2[j] = szline2[i] - '0';
	int high = Add(len, an1, an2);
	for(i = high; i >= 0; i--)
		cout << an1[i];
	cout << endl;
}