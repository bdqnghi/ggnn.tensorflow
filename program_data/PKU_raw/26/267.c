int main()
{
	int i;
	char a[101];
	cin.getline(a, 101);
	char *p = a;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
			p++;
		else
		{
			cout << *p;
			p++;
		}
	}
	cin >> i;
	return 0;
}