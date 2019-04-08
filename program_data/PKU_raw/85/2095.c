int main()
{
	int n,p;
	char s[100];
	cin>>n;cin.getline(s,1);
	while (n>0)
	{
	cin.getline(s,100);
	int l=strlen(s);
	p=0;
	if ((s[0]=='_')
	|| ((s[0]-'a'>=0)&&(s[0]-'a'<26))
	|| ((s[0]-'A'>=0)&&(s[0]-'A'<26))) p=1;
	for (int i=1;i<l;i++)
	if (!(
		(s[i]=='_')
	|| ((s[i]-'a'>=0)&&(s[i]-'a'<26))
	|| ((s[i]-'A'>=0)&&(s[i]-'A'<26))
	|| ((s[i]-'0'>=0)&&(s[i]-'0'<10))
		))
		p=0;
		if (p) cout<<"yes"<<endl; else cout<<"no"<<endl;
		n--;
	}
//cin>>l;
}
