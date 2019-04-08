
int main()
{
	int n,ans=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		if (i%7!=0&&(i%10)!=7&&(i/10)!=7)
		{
			ans+=i*i;
		}
	}
	cout<<ans<<endl;
	return 0;
}