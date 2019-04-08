int main()
{
	int m,n=0,book[1000],num[26]={0};
	char name[1000][10];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>book[i]>>name[i];
	}
	for(char z='A';z<='Z';z++)
	{
		for(int i=1;i<=m;i++)
		{
			for(int j=0;j<10;j++)
				if(name[i][j]==z)num[z-'A']++;
		}
	}
	int max=0,k=0;
	for(int i=0;i<26;i++)
	{	if(max<num[i]){max=num[i];k=i;}}
	cout<<(char)('A'+k)<<endl<<max<<endl;
	for(int i=1;i<=m;i++)
		{
			for(int j=0;j<10;j++)
				if(name[i][j]=='A'+k)cout<<book[i]<<endl;
		}
	return 0;
}