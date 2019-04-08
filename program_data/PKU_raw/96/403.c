int main()
{
	const int MAX_LEN = 100;
	int num[MAX_LEN + 1], result[MAX_LEN], i, r = 0, flag = 0, k;
	char str[MAX_LEN];
	cin.getline(str, MAX_LEN + 1);
	int nlen = strlen(str);
	memset (num, 0, sizeof(num));
	memset (result, 0, sizeof(result));
	if (nlen == 1)
		cout << '0' << endl << str;
	else if (nlen == 2 && str[0] == '1' && str[1] < '3')
	{
		cout << '0' << endl << str;
	}
	else
	{
		for (i = 0; i < nlen; i++)
		{
			num[i] = str[i] - '0';
		}
		for (i = 0; i < nlen; i++)
		{
			result[i] = (r * 10 + num[i]) / 13;
			r = (r * 10 + num[i]) % 13;
			k = r;
			if (r < 0)
				break;
		}
		for(i = 0; i < nlen; i++)
		{
			if (result[i] == 0 && flag == 0)
				continue;
			else
			{
				flag = 1;
				cout << result[i];
			}
		}
		cout << endl << k;
	}
	return 0;
}
