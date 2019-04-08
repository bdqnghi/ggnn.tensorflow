int main()
{
	int n;
	char line[100];
	int i;

	cin>>n;
	cin.get();

	while(n--)
	{
		cin.getline(line,100);
		if(line[0]!='_' && (line[0]>'z'||line[0]<'a')&&(line[0]>'Z'||line[0]<'A'))
		{
			cout<<"0"<<endl;
			continue;
		}
	//	cout<<"line="<<line<<endl;
		int len=strlen(line);
		for(i=1;i<len;i++)
		{
			if(line[i]!='_' && (line[i]>'z'||line[i]<'a')&&(line[i]>'Z'||line[i]<'A')&&(line[i]<'0'||line[i]>'9'))
			{
				cout<<"0"<<endl;
				break;
			}
		}
		if(i==len)
			cout<<"1"<<endl;
	}
	return 0;
}
