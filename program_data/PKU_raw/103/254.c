void change(char *a)
{
	char *p = a;
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
			*p += 'A' - 'a';
		p++;
	}
	return;
}
int main()
{
	char str[1001];
	cin >> str;
	int count = 1;
	change(str);
	char *p = str;
	while(*p != '\0')
	{
		if(*p == *(p+1))
		{
			count++;
		}
		else
		{
			printf("(%c,%d)",*p,count);
			count = 1;
		}
		p++;
	}
	return 0;
}