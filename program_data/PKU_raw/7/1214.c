// 13.2.cpp 
//


int main()
{
	char str1[258], str2[258], str3[258], ch[600];
	int len1, len2, len3, i = 0, j = 0;
	int m, n = 0;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = strlen(str3);
	for (i = 0; i < len1; i++)
	{
		n = 0;
		m = i;
		if (str1[m] == str2[j])
		{
			n = 1;
			for (j = 0, m; j < len2; j++, m++)
			{
				if (str1[m] != str2[j])
				{
					n = 0;
					j = 0;
					break;
				}
			}
			if (n == 1)
			{
				m = i;
				for (i = 0; i < len1 + len3 - len2; i++)
				{
					if (i >= m && i < m + len3)
						ch[i] = str3[i - m];
					else
						if (i < m)
							ch[i] = str1[i];
						else
							ch[i] = str1[len2 + i - len3];
				}
				break;
			}
		}
	}
	if (n == 1)
		for (i = 0; i < len1 + len3 - len2; i++)
			cout << ch[i];
	else
		for (i = 0; i < len1; i++)
			cout << str1[i];
	return 0;
}

