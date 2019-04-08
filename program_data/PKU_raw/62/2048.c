int main()
{
	char *p, a[100];
	int leap = 0;
	p = a;
	do
	{
		cin.get(*p);
		if (*p != ' ')
		{
			cout << *p;
			leap = 0;
		}
		if (*p == ' ' && leap == 0)
		{
			cout << *p;
			leap = 1;
		}
	}while (*p++ != '\n');
	cout << endl;
	return 0;
}