int main()
{
	char ch[500][50];
	int i,j,n,m,l[500]={0};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>ch[i];
		l[i]=strlen(ch[i]);
	}
	m=0;
	for(i=1;i<=n;i++)
	{
		if(m>0)
		{
			if(m+1+l[i]<=80)
			{
				cout<<' '<<ch[i];
				m+=l[i]+1;
			}
			else
			{
				m=0;
				cout<<endl;
			}
		}
		if(m==0)
		{
			cout<<ch[i];
			m+=l[i];
		}
	}
	return 0;
}