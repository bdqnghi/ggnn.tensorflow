int main()
{
	int n,m;
	cin>>n;
	int i,j,l,s;
	int a[70];
	while(n--)
	{
		memset(a,0,sizeof(a));a[0]=100;
		m=0;s=0;j=0;
		cin>>l;
		for(i=0;i<l;i++)
			cin>>a[i];
		while(m<60)
		{
			if(s==a[j])
			{
				m=m+3;j=j+1;
			}
			else
			{
				s=s+1;m=m+1;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}

