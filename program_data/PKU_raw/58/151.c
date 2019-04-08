int main()
{
	int i=0,k=0,n=0,flags=1,j=0;
	char a[81];
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(a,81,'\n');
		k=strlen(a);
		flags=1;
		for(j=0;j<k;j++)
		{
			if(((int)a[j]<'a'||(int)a[j]>'z')&&((int)a[j]>'Z'||(int)a[j]<'A')&&((int)a[j]<'0'||(int)a[j]>'9')&&a[j]!='_')
				flags=0;
		}
		if(flags==0)
			cout<<0<<endl;
		else if((int)a[0]>='0'&&(int)a[0]<='9')
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}
