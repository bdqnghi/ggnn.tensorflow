int main()
{
	char str[101],*p;
	gets(str);
	p=str;
	do
	{
		if (*p!=' ')
		{
			cout << *p;
			p++;
		}
		else
		{
			if (*(p+1)==' ')
				p++;
			else
			{
				cout << *p;
				p++;
			}
		}
	} while (*p!='\0');
	cout << endl;
	return 0;
}