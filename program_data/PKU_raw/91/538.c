int main()
{
	char str[101];
	cin.getline(str, 101);
	char *p = str;
	char ch = str[0];
	while (p < str + strlen(str) - 1)
	{
		* p = * p + * (p+1);
		p ++;
	}
	* p += ch;
	* ++p = '\0';
	for (p = str; p < str + strlen(str); p ++)
		cout << * p ;
	return 0;
}

		