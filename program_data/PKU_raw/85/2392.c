int main()
{
	int n,len,flag;
	char str[21];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		//cin.getline(str,21); 
		len=strlen(str);
		for(int j=0;j<len;j++)
		{
			if(j==0)
			{
			if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
				flag=0;
			else
				flag=1;
			}
			else if(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'))
				flag=flag;
			else
				flag=1;
		}
		if(flag==0)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
	}
	return 0;
}
