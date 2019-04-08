int DFS(int ,int );
int main()
{
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
	int n;
	int h=0;
	cin>>n;
	cout<<DFS(n,n)<<endl;
	}

	return 0;
}
int DFS(int n,int p)
{
	int ans=0;
	if(n==1)return 1;
	for(int i=2;i<=p;i++)
	{
		if(n%i==0)
		{
			ans=ans+DFS(n/i,i);
		}
	}
	return ans;

}