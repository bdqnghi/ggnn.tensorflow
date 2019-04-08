int main()
{
	int i = 0;
	char c[100];
	char *p;
	cin.getline(c,100);
	cout << c[0];
	for(p = c + 1; *p != '\0'; p++)
	{
		if(*p == ' ' && *(p - 1) == ' ')
			continue;
		cout << *p;
	}
	cout << endl;
	return 0;
}