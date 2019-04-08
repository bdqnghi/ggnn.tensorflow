int main()
{
	int a[10000],b[10000],n,i=3,j=1;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	b[1]=1;
	b[2]=1;
	cin>>n;
	for(j=1;j<=n;j++)
	{
		cin>>a[j];
	}
	for(i=3;i<=10000;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
	for(j=1;j<=n;j++)
	{
		cout<<b[a[j]]<<endl;
	}
	return 0;
}
	
	


