int main()
{
	char s[110];
	while(cin>>s)
	{
	cout<<s<<endl;
	int l=strlen(s),i;
	for(i=l-1;i>=0;i--)
	{
	if(s[i]==')')
		continue;
	else if(s[i]=='(')
	{
		int j;
	for( j=i;j<l;j++)
		{if(s[j]==')')
		{
		s[i]=' ';s[j]=' ';
		break;
	}}
		if(j==l)
			s[i]='$';
	}
	else
		s[i]=' ';
	}
	for(i=0;i<l;i++)
		if(s[i]==')')
			s[i]='?';
	cout<<s<<endl;
	}
	return 0;
}