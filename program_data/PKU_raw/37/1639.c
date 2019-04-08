
int main()
{
	int t, i;
	int mark[26];
	char ch;
	cin >> t;
	cin.get();
	while(t)
	{
		memset(mark, 0, sizeof(mark));
		char c[100000];
		cin.getline(c, 100000);
		int len=strlen(c);
		for(i=0 ; i<len ; i++)
			mark[c[i]-'a']++;
		for(i=0 ; i<len ; i++)
			if(mark[c[i]-'a'] == 1)
			{
				cout << c[i] << endl;
				break;
			}
		if(i == len)
			cout << "no" << endl;
		t--;
	}
}