int main()
{
	int ans[100]={0},flag=0;
	ans[0]=1;
	int n,i,j;
	cin>>n;
	for(j=1;j<=n;j++)
		for(i=0;i<100;i++)
		{
			ans[i]=ans[i]*2+flag;
			if(ans[i]>=10)
			{
				flag=1;
				ans[i]=ans[i]%10;
			}
			else
				flag=0;
		}
	for(i=99;i>=0;i--)
		if(ans[i]!=0)
			break;
	for(j=i;j>=0;j--)
		cout<<ans[j];
	cout<<endl;
	return 0;
}