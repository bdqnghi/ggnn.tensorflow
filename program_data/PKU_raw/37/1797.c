

int main()
{
	int t;
	cin>>t;
	cin.get();
	for(int i=0;i<t;i++)
	{
		int flag[26]={0},str_len;
		char str[100000];
		cin.getline(str,100000);
		str_len=strlen(str);
		for(int j=0;j<str_len;j++)
		{
			int c=str[j]-'a';
			if(flag[c]==-1)
				continue;
			else
			{
				if(flag[c]==0)
					flag[c]=j+1;
				else
					flag[c]=-1;
			}
		}
		int min_pos=100000;
		char c='@';
		for(int j=0;j<26;j++)
		{
			if(flag[j]==-1||flag[j]==0)
				continue;
			else
			{
				if(flag[j]<min_pos)
				{
					min_pos=flag[j];
					c=j+'a';
				}
			}
		}
		if(c=='@')
			cout<<"no"<<endl;
		else
			cout<<c<<endl;
	}
	return 0;
}