int main()
{
	int i = 0, j;
	char s[101], a[101], *p;
	cin.getline (s, 101);
	p = s + 1;
	for(; *p != '\0'; p++)
	{
		a[i] = *p + *(p - 1);
		i++;
	}
	a[i] = *(p - 1) + s[0];
	for(j = 0; j <= i; j++)
		cout << a[j];
	return 0;
}
	