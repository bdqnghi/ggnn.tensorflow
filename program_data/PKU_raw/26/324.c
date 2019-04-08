int main()
{
	char a[101], *p = a;
	cin.getline(a, 101);
	while (*p != '\0')
	{
		cout << *p;
		if (*p == ' ')
		{
			while (*++p == ' ')
			{
			}
			p--;
		}
		p++;
	}
	return 0;
}