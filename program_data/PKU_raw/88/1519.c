int main()
{
	char str[31], *p;
	cin.getline(str,31);
	p=str;
	do
	{
		if (*p>='0'&&*p<='9')
		{
			cout << *p;
			p++;
		}
		else
		{
			p++;
			if (*p>='0'&&*p<='9')
				cout << endl;
		}
	} while (*p!='\0');
	cout << endl;
	return 0;
}