int main()
{
	char a[256], b[256], c[256];
	int i;
	char *p;
	cin >> a >> b >> c;
	p = strstr(a, b);
	if(p != NULL)
	{
		for(i = 0;i < p - a;i++)
			cout << a[i];
		cout << c;
		for(p = p + strlen(b);p < a + strlen(a);p++)
			cout << *p;
	}
	else
		cout << a;
	cout << endl;
	return 0;
}
