int main()
{
	int a, b, num = 0 , e[100], f[100] = {0}, i, j, l;
	char c[100], d[100];
	cin >> a;cin.get();
	cin >> c;l = strlen(c);
	cin >> b;
	for(i = 0; i < l; i++)
	{
		if(c[i] >= '0' && c[i] <= '9') e[i] = c[i] - '0';
		else if(c[i] >= 'a' && c[i] <= 'z') e[i] = c[i] - 'a' + 10;
		else e[i] = c[i] - 'A' + 10;
		num = num * a + e[i];
	}
	if(num == 0) cout << "0" << endl;
	else 
	{i = 0;
	while(num!= 0)
	{
		f[i++] = num % b;
		num /= b;
	}
	for(j = i - 1;j >= 0; j--)
	{
		if(f[j] >= 0 && f[j] <= 9) d[j] = f[j] + '0';
		else d[j] = f[j] - 10 + 'A';
		cout << d[j] ;
	}
	cout << endl;
	}




	//cout << num << endl;
	return 0;
}



