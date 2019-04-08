int main()
{
	int i;
	int lena, lenb;
	char a[251], b[251];
	int na[251], nb[251] = { 0 };
	cin >> a >> b;
	lena = strlen(a);
	lenb = strlen(b);
	for(i = 0; i < lena; ++i)
		na[i] = a[lena - i - 1] - '0';
	for(i = 0; i < lenb; ++i)
		nb[i] = b[lenb - i - 1] - '0';
	for(i = 0; i < lena; ++i)
		nb[i] += na[i];
	for(i = 0; i < 251; ++i)
		if(nb[i] > 9)
		{
			nb[i] -= 10;
			nb[i + 1]++;
		}
	for(i = 250; i >= 0; --i)
		if(nb[i] != 0)
			break;
	if(i == -1)
		cout << 0 << endl;
	else
	{
		for(; i >= 0; --i)
			cout << nb[i];
		cout << endl;
	}
	return 0;
}


