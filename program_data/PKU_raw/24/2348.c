// 13.1.cpp 

int main()
{
	char ch[3000];
	int len1 = 0, len2 = 0, len = 0, i, j;
	int m = 0, n = 0, p = 0, num = 0;
	while(cin)
	{
		ch[len] = getchar();
		if (ch[len] == ' ' || ch[len] == '\n')
			num++;
		if (num == 1)
		{
			n = 0;
			len2 = len;
		}
		if (ch[len] == '\n')
			break;
		len++;
	}
	ch[len] = ' ';
	for (i = 0; i <= len; i++)
	{
		if (ch[i] != ' ')
			 p++;
		else
		{
			if (p > len1)
			{
				len1 = p;
				m = i - p;
			}
			if (p < len2)
			{
				len2 = p;
				n = i - p;
			}
			p = 0;
		}
	}
	for (i = m; i < m + len1; i++)
		cout << ch[i];
	cout << endl;
	for (i = n; i < n + len2; i++)
		cout << ch[i];
	cout << endl;
	return 0;
}









