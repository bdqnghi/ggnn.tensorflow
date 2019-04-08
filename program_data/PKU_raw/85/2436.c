int main()
{
    int i,n,j;
	char str[22];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
		{
			for(j=1;str[j]!='\0';j++)
			{
				if(str[j]!='_'&&!(str[j]>='a'&&str[j]<='z')&&!(str[j]>='A'&&str[j]<='Z')&&!(str[j]>='0'&&str[j]<='9'))
					break;
			}
			if(str[j]=='\0') cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}