int main()
{
	char a[50];
	char b[50];
	cin>> a;
	//cin.get();
	cin >> b;
	int  i = 0, flag = 0;
	while (b[i] != '\0')
	{
		int k = 0;
		while (b[i] == a[k])
		{
			if (k == strlen(a) - 1)
		{
			cout << i  - strlen(a) + 1<< endl;
			flag = 1;
			break;
		}
			k ++;
			i ++;
		}
		if (flag == 1)
			break;
		i ++;
	}
	if (flag == 0)
		cout << "no";
	return 0;
}
