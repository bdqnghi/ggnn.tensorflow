int main()
{
	int t, i, j, b[26], x, flag;
	char a[100000];
	cin >> t;	
	for(i = 0; i < t; i++)
	{
		flag = 0;
		cin >> a;
		for(j = 0; j < 26; j++)
			b[j] = 0;
		for(j = 0; j < strlen(a); j++)
		{
			x = a[j] - 'a';
			b[x]++;
		}
		for(j = 0; j < strlen(a); j++)
		{
			if(b[a[j] - 'a'] == 1)
			{
				cout << a[j] << endl;
				flag = 1;
				break;
			}		
		}
		if(flag == 0)
		cout << "no" << endl;
	}	
	return 0;
}