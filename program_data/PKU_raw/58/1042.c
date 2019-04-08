
int main()
{
	int n,len,i,j,flag;
	char s[81];
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(s,81);
		len=strlen(s);
		if(s[0]=='_'||s[0]>64&&s[0]<91||s[0]>96&&s[0]<96+27)
		{
			flag=1;
			for(j=1;j<len;j++)
				if(!(s[j]=='_'||s[j]>64&&s[j]<91||s[j]>96&&s[j]<96+27||s[j]>47&&s[j]<58))
				{
					flag=0;
					break;
				}
			if(flag)cout<<1<<endl;
			else cout<<0<<endl;
	
		}
		else cout<<0<<endl;
	}
	return 0;
}