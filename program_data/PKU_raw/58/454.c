int main()
{
	int i,n,l,p,k;
	char ch[100];
	cin>>n;
	cin.get();
	for(k=1;k<=n;k++)
	{
		p=1;
		cin.getline(ch,100,'\n');
		l=strlen(ch);
		if(ch[0]=='_'||ch[0]>='a'&&ch[0]<='z'||ch[0]>='A'&&ch[0]<='Z')
		{
			for(i=1;i<=l-1;i++)
			{
				if(ch[i]<'0'||ch[i]>'9'&&ch[i]<'A'||ch[i]>'Z'&&ch[i]<'a'&&ch[i]!='_'||ch[i]>'z')
				{
					p=0;
				}
			}
		}
		else
		{
			p=0;
		}
		cout<<p<<endl;
	}
	
	return 0;
}

		
