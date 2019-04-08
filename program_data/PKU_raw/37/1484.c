int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char s[100001];
		cin>>s;
		int len = strlen(s);
		int i;
		int f = 0;
		int a[26];
		memset(a,0,sizeof(a));
		for( i = 0 ; i < len ; i ++)
		{
			a[s[i]-'a'] ++;
		}
		int j;
		char c;
		int mina = 1000001;
		for(i = 0 ; i < 26; i ++)
		{
			if(a[i] == 1)
			{
				f = 1;
				for(j = 0; j < len; j ++)
				{
					if(s[j] == i+'a')
					{
						if(mina > j)
						{
							mina = j;
							c = s[j];
						}
						break;
					}
				}
			}
		}
		if(f == 0)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	} 
	return 0;
}
