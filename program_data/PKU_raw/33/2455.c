int main()
{
	char a[256];
	int n;
	cin>>n;
	getchar();
	for(int i=1;i<=n;i++)
	{
		cin.getline(a,256);
		int q;
		q=strlen(a);
		for(int m=0;m<q;m++)
		{
			if(a[m]=='A')
				cout<<"T";
			if(a[m]=='T')
				cout<<"A";
			if(a[m]=='G')
				cout<<"C";
			if(a[m]=='C')
				cout<<"G";
		}
		printf("\n");
		
	}
	return 0;
}