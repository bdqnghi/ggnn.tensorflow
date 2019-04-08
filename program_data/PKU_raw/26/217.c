int main()
{
	char str[301];
	char *p = NULL, *q = NULL, *r = NULL;
	int count;
	cin.getline(str,101);
	int a = strlen(str);
	p = str;
	while(*p != '\0')
	{
		count = 0;
		if(*p == ' ')
		{
			for(r = p; *r == ' '; r++)
				count++;
			for(;r < str + 4 * a; r++)
				*(r - count + 1) = *r;
		}
		p++;
	}
	cout << str << endl;
	return 0;
}