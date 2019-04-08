int main()
{
	char str[100000]={'\0'},*p;
	int len,t,flag;
	cin>>t;
	cin.get();
	for(int i=0;i<t;i++)
	{
		cin.getline(str,100000);
		len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
			flag=0;
			for(int j=i+1;j<len;j++)
			{
				if(str[i]==str[j])
				{
					flag=1;
					str[j]='0';
					break;
				}
			}
			if(flag==0)
			{
				cout<<str[i]<<endl;
				break;
			}
			}
		}
		if(flag==1)
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}