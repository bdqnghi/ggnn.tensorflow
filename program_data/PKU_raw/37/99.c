int main()
{
	int t, p = 1;
	cin >> t;
	cin.get();
	char ch[100000];
	while(p <= t)
	{
		cin.getline(ch, 100000);
		int i = 0, flag = 0;
		while(ch[i] != '\0')
		{
			while(ch[i] == '0' ) i ++;
			int count = 0;
			for (int j = i + 1; ch[j] != '\0'; j ++)
			{
				
				if (ch[i] == ch[j])
				{
					ch[j] = '0';
					count  ++;
				}
			}
				if (count == 0 && ch[i] >='a'&&ch[i]<='z')
				{
					cout << ch[i] << endl;
					flag = 1;break;
				}
			   i ++;
			if (flag == 1) break;
		}	
    	if (flag == 0)
			cout << "no" << endl;
		p ++;
	}
	return 0;
}

