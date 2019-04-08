
int main ()
{
	char str[101], str1[101];
	cin.getline(str, 101);
	char *p = &str[1], *q = str1;
	while (*p != '\0')
	{
		*q = *p + *(p - 1);
		p++ ;
		q++ ;
	}
	*q = str[0] + *(p - 1);
	*(q + 1) = '\0';
	cout << str1 << endl;

	return 0;
}