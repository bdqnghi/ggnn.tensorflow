int main()
{
	int i,j,n;
	char a[300];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='A')
				a[j]='T';
			else if(a[j]=='T')
				a[j]='A';
			else if(a[j]=='C')
				a[j]='G';
			else
				a[j]='C';
		}
		cout<<a<<endl;
	}
	return 0;
}
