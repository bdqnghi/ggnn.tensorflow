int main()
{
	char str[100001]={0};
	int t=0,count[27]={0},flag=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		flag=0;
		for(int clear=0;clear<100001;clear++)
		{
			str[clear]=0;
			if(clear<26)
			{
				count[clear]=0;
			}
		}
		cin>>str;
		for(int j=0;j<100001;j++)
		{
			if('a'<=str[j]&&str[j]<='z')
			{
				count[str[j]-'a'+1]++;
			}
		}
		for(int k=0;k<100001;k++)
		{
			if(count[str[k]-'a'+1]==1)
			{
				cout<<str[k]<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}