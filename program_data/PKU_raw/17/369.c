int match(char c[],int n)
{
	for(int i=n+1;i<strlen(c);i++)
	{
		if(c[i]==')')
		{
			c[i]=' ';
			c[n]=' ';
			return i;
		}
		else if(c[i]=='(')
		{
			i=match(c,i);
		}
	}
	c[n]='$';
	return strlen(c)-1;
}
int main()
{
	char ch[110];
	while(cin>>ch)
	{
		cout<<ch<<endl;
		for(int i=0;ch[i]!=0;i++)
			if(ch[i]!='('&&ch[i]!=')')
				ch[i]=' ';
		for(int i=0;ch[i]!=0;i++)
		{
			if(ch[i]=='(')
				i=match(ch,i);
			else if(ch[i]==')')
				ch[i]='?';
		}
		cout<<ch<<endl;
	}
	return 0;
}