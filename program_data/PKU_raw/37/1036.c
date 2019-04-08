int main()
{
	int t, i, j, k, len;
	char str[100000];
	int flag = 1;
	cin >>t;
	for (i = 1; i <= t; i++)
	{
		flag = 1;
		cin >> str;
		len = strlen(str);
		for (j = 0; j <= len - 1; j++) // ?0?????????????
		{
			for (k = 0; k <= len - 1 ; k++)
			{
				if(k != j && str[k] == str[j])
					break;
			}
			if(k == len || (j == len - 1 && k == j))
			{
				cout <<str[j] << endl;
				flag = 0;
				break;
			}
		}

		if(flag) cout << "no"<<endl;
	}
	return 0;
}


