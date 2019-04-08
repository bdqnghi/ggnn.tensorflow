

struct DP
{
	int height;
	int num;
}dp[26];

int main()
{
	int k,i,j;
	int h[26];
	int  Max;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>h[i];
	}
	dp[0].height=INT_MAX;
	dp[0].num=0;
	for(i=1;i<=k;i++)
	{
		dp[i].height=h[i];
		Max=INT_MIN;
		for(j=0;j<i;j++)
		{
			if(Max<dp[j].num && dp[j].height>=dp[i].height)
				Max=dp[j].num;
		}
		dp[i].num=Max+1;
	}
	Max=INT_MIN;
	for(i=0;i<=k;i++)
		if(Max<dp[i].num) Max=dp[i].num;
	cout<<Max<<endl;


	return 0;
}