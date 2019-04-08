int main()
{
	int t;//???????
	cin>>t;
	int f(int,int);
	for(int i=1;i<=t;i++)
	{
		int m,n;
		cin>>m>>n;//m????n???
		int ans;
		ans=f(n,m);
		cout<<ans<<endl;
	}
	return 0;
}
int f(int pa,int pi)
{
	int c=0;
	
	if(pa==1||pi==0)
	{
		c=1;
	}
	if(pi<0)
	{
		c=0;
	}
	if(pa>1&&pi>=1)
		c=f(pa-1,pi)+f(pa,pi-pa);
	return(c);
}
