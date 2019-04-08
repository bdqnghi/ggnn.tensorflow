//************************
//* ??? ???????*
//* 1200012878 ???    *
//* 12?9?              *
//************************
int main()
{
	char s[101], *p;
	cin.getline(s, 101);
	int len = strlen(s);
	int i;
	p = s;
	char temp = s[0];
	for (i = 0; i <= len - 2; i++)
	{
		*p = *p + *(p + 1);
		p++;
	}
	*p = *p + temp;
	p = s;
	for (i = 0; i <= len - 1; i++)
		cout << *p++;
	return 0;
}