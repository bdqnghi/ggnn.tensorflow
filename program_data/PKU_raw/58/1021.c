int main()
{
	int n;
	int i,j;
	int flag=0;
	char s[100]={0};
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		flag=0;
		cin.getline(s,100);
		 //cout<<s[0]<<"check";
		for(j=0;j<strlen(s);j++)
		{
			if((s[0]!='_'&&(s[0]>'Z'||s[0]<'A')&&(s[0]>'z'||s[0]<'a'))||s[j]!='_'&&(s[j]>'9'||s[j]<'0')&&(s[j]>'Z'||s[j]<'A')&&(s[j]>'z'||s[j]<'a'))
			{	
				cout<<"0"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"1"<<endl;
		
	}
	return 0;
}