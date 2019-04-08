int main()
{
	int t, i, j, l, k, m;
	char s[100000], a[26];
	cin >> t;
	for(i = 0 ; i < t ; i++)
	{
		for(j = 0; j < 26 ; j++)
		a[j] = '1';
		cin >> s;
		m = strlen(s);
		a[0] = s[0];
		for(j = 1 ;j < m;j++)
		{
			k = 0;
			do
			{
				if(a[k] == '1')
					break;
				if(a[k] != s[j])
					k ++;
				else break;
			}while(1);
			if(a[k] == '1')
				a[k] = s[j];
			else
			{
				for(l = k; l < 26 ; l ++)
					a[l] = a[l + 1];
			}
		}
		if(a[0] == '1')
			cout << "no" << endl;
		else
			cout << a[0] << endl;
	}
	return 0;
}