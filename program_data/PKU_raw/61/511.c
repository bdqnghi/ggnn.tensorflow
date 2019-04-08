
int f[25];

int cal(int t)
{
	if(t==1 || t==2)
	{
		f[t]=1;
		return 1;
	}
	if(f[t]<0)
	{
		f[t]=cal(t-1)+cal(t-2);
	}
	return f[t];
}

int main()
{
	int n;
	cin>>n;
	memset(f,-1,sizeof(f));
	while(n--)
	{
		int t;
		cin>>t;
		cout<<cal(t)<<endl;
	}
	return 0;
}