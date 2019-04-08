
int main()
{
	char a[101];
	cin.getline(a,101);
	char *p;
	p = a;
	char b[101];
	int n = strlen(a);
	int i = 0;
	for (i = 0;i < n;i++)
	{
		if (i != n-1)
			b[i] = p[i] + p[i+1];
		else
			b[i] = p[i] + p[0];
	}
	for (i = 0;i < n;i++)
		cout<<(char)(b[i]);
	return 0;
}