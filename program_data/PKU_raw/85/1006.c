int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		char str[30];
		cin>>str;
		int i;
		int flag=1;
		if(str[0]=='_'||(str[0]>=65&&str[0]<=90)||(str[0]>=97&&str[0]<=122))
		{
			for(i=1;i<strlen(str);i++)
			{
				if(str[i]=='_'||str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122||str[i]>=48&&str[i]<=57)
					continue;
				else {cout<<"no"<<endl;flag=0;break;}
			}
		}
		else {cout<<"no"<<endl;flag=0;}
		if(flag==1)
			cout<<"yes"<<endl;
		n--;
	}
	return 0;
}


