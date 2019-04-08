int main()
{
	int i,j,n,count;
	cin>>n;
	char s[25];	
	for(i=0;i<n;i++)
	{
		cin>>s;
		if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_'))
		{
			count=1;
		}
		else
		{
			count=0;
		}
		for(j=1;j<strlen(s);j++)
		{
			if((s[j]>='0'&&s[j]<='9')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]=='_'))
			{
				count+=1;
			}
		}
		if(count==strlen(s))
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}