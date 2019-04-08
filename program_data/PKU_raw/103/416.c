int main()
{
	char s[1000];
	int i,p;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		p=1;
		if(s[i]!=s[i+1])
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				s[i]-='a'-'A';
			}
			cout<<"("<<s[i]<<","<<1<<")";
		}
		else
		{
			while(s[i]==s[i+1]||s[i]==s[i+1]+'A'-'a'||s[i]==s[i+1]+'a'-'A')
			{
				i++;
			    p++;
			}
			if(s[i]>='a'&&s[i]<='z')
			{
				s[i]-='a'-'A';
			}
			cout<<"("<<s[i]<<","<<p<<")";
		}
	}
	cout<<endl;
	return 0;
}