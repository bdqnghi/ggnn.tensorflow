int main()
{
	int n=0,m=0,i=0,s=0;
	cin>>n>>m;
	while(n!=0)
	{
	for(i=2;i<=n;i++)
		{
           s=(s+m)%i;
	}cout<<s+1<<endl;
cin>>n>>m;
s=0;
}
}