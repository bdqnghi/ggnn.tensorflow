int main()
{
	int n;
	int i=0,j=0;
	cin>>n;
	int ans[100001];
	ans[0]=1;
	for(i=1;i<100001;i++)
		ans[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<100000;j++)
		{
			if(ans[j]!=0)
				ans[j]=2*ans[j];
			
		}
		for(j=0;j<100000;j++)
		{
			if(ans[j]>9)
			{
				ans[j+1]=ans[j+1]+ans[j]/10;
				ans[j]=ans[j]%10;

			}
		}
	}
	int r=0;
	for(i=100000;i>=0;i--)
	{
		if(ans[i]>0)
		{
			r=i;
			break;
		}
	}
	for(i=r;i>=0;i--)
		cout<<ans[i];
	
	return 0;
}