/*
 * file    homework 11_3
 * author  ??
 * date    2010-12-09
 * description
           ???????????
*/



int main()
{
	char str[31];
	char *p;
	cin.getline(str, 31);
	p = str;
	while (*p != '\0')
	{
		while ((*p > '9' || *p < '0') && *p != '\0')
			p++;
		if (*p == '\0')
			break;
		while (*p <= '9' && *p >= '0')
		{
			cout << *p;
			p++;
		}
		cout << endl;
	}
	return 0;
}
