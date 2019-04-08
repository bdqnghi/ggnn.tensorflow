int main()
{
	char mun[100];
	int i, len, mod = 0, flag = 0;
	cin >> mun;
	len = strlen(mun);
	for (i = 0; i < len; i++)
	{
		mod = mod * 10 + mun[i] - '0';
		if (flag == 0 && (mod / 13) == 0)
			continue;
		else
		{
			cout << mod / 13;
			flag = 1;
		}
		mod = mod % 13;
	}
	if (flag == 0)
		cout << 0;
	cout << endl << mod << endl;
	return 0;
}

