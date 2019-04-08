int main()
{
	char s[101], s1[101], *p, *q;
	int i;
	cin.getline(s,101);
	int len = strlen(s);
	p = s;
	q = p;
	for (i = 0; i < len - 1; i++)
	{
		s1[i] = *p + *(p + 1);
		p++;
	}
	s1[len - 1] = *q + *p;
	for (p = s1; p < s1 + len; p++)
		cout << *p;
	cout << endl;
	return 0;
}