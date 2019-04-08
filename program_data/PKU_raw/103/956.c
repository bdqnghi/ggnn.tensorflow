int main()
{
	int n, i, k = 0;
	char a = '0';
	char s[1000];
	cin >> s;
	n = strlen(s);
	for(i = 0; i < n; i++)
	{
		if(s[i] == a || (s[i] - 32 == a))
			k++;
		else
		{
			if(k != 0)
				cout << "(" << a << "," << k << ")";
			k = 1;
			a = s[i];
			if(a > 'Z')
				a = a - 32;
		}
	}
	cout << "(" << a << "," << k << ")";
	return 0;
}