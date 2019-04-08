int main()
{
	char str[100001];
	int t=0,i=0,k=0,j=0,flag=0,m=0;
	int num[27];
	for(i=0;i<27;i++)
		num[i]=0;
	cin>>t;
	cin.get();
	for(i=1;i<=t;i++)
	{
		for(j=0;j<27;j++)
			num[j]=0;
		flag=0;
		cin.getline(str,100001,'\n');
		k=strlen(str);
		for(j=0;j<k;j++)
		{
			num[str[j]-'a'+1]++;
		}
		for(m=1;m<27;m++)
		{
			if(num[m]==1)
			{
				flag=1;
			}
		}
		if(flag==0)
			cout<<"no";
		else
		{
			for(j=0;j<k;j++)
			{
				if(num[str[j]-'a'+1]==1)
				{
					cout<<str[j];
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}