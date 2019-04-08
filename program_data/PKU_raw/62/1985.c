


int main()
{
	char s[100], *p;
	int d[100] = {0}, *q, l;
	cin.getline(s,100);
	l = strlen(s);
	for (p = s, q = d;*p != '\0';p++,q++)
	{
		if (*p == ' ')
		{
			if (*(p - 1) == ' ')
				*q = 1;
		}
	}
	p = s;
	q = d;
	for (int j = 0; j < l;j++)
	{
		if (*q == 0)
			cout << *p ;
		p++;
		q++;
	}
	return 0;
}
