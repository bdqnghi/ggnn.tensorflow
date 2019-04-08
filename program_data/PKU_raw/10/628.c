int main()
{
	int n,m,i,j;
	int a[30]={0};
	int f[30]={0};
	int max(int,int);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		f[i]=1;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
			if(a[j]>=a[i])
				f[i]=max(f[j]+1,f[i]);
	}
	m=f[1];
	for(i=2;i<=n;i++)
		m=max(m,f[i]);
	cout<<m<<endl;
	return 0;
}

int max(int a,int b)
{
	if(a>b) b=a;
	return b;
}