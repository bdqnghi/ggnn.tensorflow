int main()
{
	char a[100];
	char b[100];
	int l;
	
	cin >> a;
	
	l = strlen(a);
	
	for(int i = 0; i < l; i ++)
	{
		b[i] = a[l - i - 1];
		cout << b[i];
	}
	
	return 0;
}
