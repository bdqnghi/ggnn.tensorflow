int main()
{
	int sum = 0; // 
	char a[100], *p = a, *q;
	cin.getline(a, 100);
	while (*p != '\0')
	{
		q = p; 
		if (*p == ' ' && *(p + 1) == ' ')
		{
			for (; *p != '\0'; p++)
				*p = *(p + 1);
			p = q;
		}
		else
			p++;
	}
	cout << a << endl;
	return 0;
}