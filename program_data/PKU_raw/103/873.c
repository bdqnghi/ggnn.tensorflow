int main()
{
	char s[1002];
	cin>>s;
	char mark = 0;
	int count = 0;
	for(int i = 0;i < strlen(s);i++)
	{
		char c = s[i];
		if(c >= 'a')
			c -= 32;
		if(c == mark)
		{
			count++;
		}
		else
		{
			if(mark != 0)
			{
				cout<<"("<<mark<<","<<count<<")";
			}
			mark = c;
			count = 1;
		}
	}
	cout<<"("<<mark<<","<<count<<")";
	return 0;
}