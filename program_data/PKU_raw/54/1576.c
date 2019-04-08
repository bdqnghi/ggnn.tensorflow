int main()
{
	int check(int,int,int);
	int i,n,k;
	cin>>n>>k;
	for(i=1;1;i++)
	{
		if(check(i,n,k))
		{
			cout<<i<<endl;
			return 0;
		}
	}
}

int check(int shally,int n,int k)
{
	int i;
	for(i=1;i<=n;i++)
	{
		shally=shally-k;
		if((shally%n==0)&&(i==n))
		{
			return 1;
		}
		if(shally%n!=0)
		{
			return 0;
		}
		shally=shally-shally/n;
	}
}