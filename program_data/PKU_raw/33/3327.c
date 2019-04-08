int main()
{
	char a[1000][300];
	int n,i,j;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='A')
				cout<<'T';
			if(a[i][j]=='T')
				cout<<'A';
			if(a[i][j]=='G')
				cout<<'C';
			if(a[i][j]=='C')
				cout<<'G';
		}
		cout<<endl;
	}
	return 0;
}





