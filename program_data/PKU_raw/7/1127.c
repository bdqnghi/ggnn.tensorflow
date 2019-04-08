int main()
{
	char a[256] = {0}, b[256] = {0}, c[256] = {0};
	cin >> a >> b >> c;
	char *p, *q;
	p = strstr(a, b);
	q = a;
	if(p == NULL)
		cout << a;
	else
	{
		while (q != p)
		{
			cout << *q;
			q++;
		}
		cout << c;
		q = q + strlen(c);
		while (*q != '\0')
		{	cout << *q;
			q++;
		}
	} 

	return 0;
}