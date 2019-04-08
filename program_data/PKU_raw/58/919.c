char s[81];
int a;
int main()
{
	int str,l,i,n,m,p;
	cin>>n;
	getchar();
	for(l=0;l<n;l++)
	{  
		
	    cin.getline(s,81);
		str=strlen(s);
		m=0;
		p=0;
	
		if(s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
			m=1;
		else
			m=0;
		for(i=0;i<str;i++)
		{
			if(s[i]=='_'||(s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
				p=1;
			else
			{
				p=0;
				break;
			}
		}
	
		if(p&&m==1)
			a=1;
		else
			a=0;
		cout<<a<<'\n';
	}
	return 0;
}