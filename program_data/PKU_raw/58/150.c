int main()
{
	char str[81];
	int n=0,i=0,j=0,k=0,flags=0,count=0;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		flags=1;
		cin.getline(str,81,'\n');
		k=strlen(str);
		for(j=0;j<k;j++)
		{
			if(((int)str[j]>'z'||(int)str[j]<'a')&&((int)str[j]>'9'||(int)str[j]<'0')&&((int)str[j]>'Z'||(int)str[j]<'A')&&str[j]!='_')
			{
				flags=0;
				break;
			}
		}
		if(flags==0)
			cout<<0<<endl;
		else if(str[0]=='0'||str[0]=='1'||str[0]=='2'||str[0]=='3'||str[0]=='4'||str[0]=='5'||str[0]=='6'||str[0]=='7'||str[0]=='8'||str[0]=='9')
			cout<<0<<endl;
		else 
			cout<<1<<endl;
	}
	return 0;
}