int main()
{
	int n,i,j,k;
	cin >> n;
	cin.get();
	while(n >= 1)
	{
		n--;
		char str[102];
		cin.getline(str,102);
		int len,i,j,k;
		len = strlen(str);
		if(str[0] != '_')
			if((str[0] < 'A')||(str[0] > 'z')||((str[0] > 'Z')&&(str[0] < 'a')))
				cout << "0" << endl;
		if((str[0] == '_')||((str[0] >= 'A')&&(str[0] <= 'Z'))||((str[0] >= 'a')&&(str[0] <= 'z')))
		{
		for(i = 0; i < len; i++)
		{
			if((str[i] < '0')||((str[i] > 'Z')&&(str[i] < 'a'))||(str[i] > 'z'))
				if(str[i] != '_')
				break;
		}
		if(i != len)
			cout << "0" << endl;
		if(i == len)
			cout << "1" << endl;
		}
	}
	return 0;
} 