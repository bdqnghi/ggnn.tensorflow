int main()
{
	int t,i,j,n,m,b[100000],c[26];
	char a[100000],out;
	cin>>t;
	cin.get();
	for(i=0;i<t;i++)
	{
		cin.getline(a,100000);
		memset(c,0,sizeof(c));
		m=j=0;
		while(a[j]!='\0')
			j++;
		n=j;
		for(j=0;j<n;j++)
		{
			b[j]=a[j]-97;
			c[b[j]]++;
		}
		for(j=0;j<n;j++)
			if(c[b[j]]==1)
			{
				out=b[j]+97;
				cout<<out<<endl;
				m=1;
				break;
			}
		if(m==0)
			cout<<"no"<<endl;
	}
	return 0;
}
