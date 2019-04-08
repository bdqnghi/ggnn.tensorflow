/*
 * file    homework 9_5
 * author  ??
 * date    2010-11-24
 * description
           ???????????????????
*/



int main()
{
	char str[501];
	int i, j, k, len;
	cin >> str;
	len = strlen(str);
	for (i = 2; i <= len; i ++)
		for (j = 0; j <= len - i; j ++)
		{
			for (k = 0; k <= (i - 1) / 2; k ++)
				if (str[j + k] != str[j + i - 1 - k])
					break;
			if (k > (i - 1) / 2)
			{
				for (k = 0; k < i; k ++)
					cout << str[j + k];
				cout << endl;
			}
		}

	return 0;
}
