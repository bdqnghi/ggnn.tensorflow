

int main()
{
	char s[80];
	gets(s);
	char* p;
	p = s;
	int n;
	while(*p != '\0')
	{
		if(p-s > 0 && (*(p-1) <'0' || *(p-1) > '9' ) && n == 0)
		{
			cout << endl;
			n++;
		}
		if(*p>='0' && *p<='9')
		{
			cout << *p;
			n = 0;
		}
		p++;
	}
	return 0;
}