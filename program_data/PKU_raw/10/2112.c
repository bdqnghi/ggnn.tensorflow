int main()
{
	int dp[50];
	int m[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>m[i];
	for(int i=0;i<n;i++)
	dp[i]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(m[i]<=m[j])
			{
				dp[i]=max(dp[j]+1,dp[i]);
			}
		}
	}
	int maxl=0;
	for(int i=0;i<n;i++)
	if(dp[i]>maxl)
	maxl=dp[i];
	cout<<maxl;
	}
