// ****************************
// ??? ? ????
// ?? ? ??? 1300012972
// ?? ? 12.15
// ****************************




int main()
{
	char str[500], *p;
	int j, num[500] = {0}, len, k, m, max = 0, *q;
	
	cin >> m >> str;         // m??????

	len = strlen(str);       // ????????

	for (p = str, q = num; p <= str + len - m; p++, q++)  //  ????????????????????????????
	{
		(*q)++;

		for (j = 1; p + j <= str + len - m; j++)
		{
			for (k = 0; k < m; k++)              //  ??????????
				if (*(p + k) != *(p + j + k))
					break;
			if (k == m)
				(*q)++;
		}

		if (max < *q)                         // ??????????
			max = *q;
	}
	
	if (max < 2)                            // ??????????
		cout << "NO" << endl;
	else
	{
		cout << max << endl;

		for (q = num, p = str; q <= num + len - m; q++, p++)
			if (max == *q)
			{
				for (k = 0; k < m; k++)
					cout << *(p + k);
				cout << endl;
			}
	}

	return 0;
}
	