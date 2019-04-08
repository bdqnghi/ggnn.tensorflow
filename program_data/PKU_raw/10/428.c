int main()
{
	int m[100]={0};
	int min=0;
	int ans[100]={0};
	int k=0;
	cin>>k;
	for(int i=0;i<=k-1;i++)
	{
		cin>>m[i];
	}
	ans[0]=1;
	int temp=0;
	for(int i=1;i<=k-1;i++)
	{
		temp=0;
		for(int j=i-1;j>=0;j--)
		{
			if(m[j]>=m[i])
			{
				if(temp<ans[j])
					temp=ans[j];
			}
		}
		ans[i]=temp+1;
	}
	int max=0;
	for(int i=0;i<=k-1;i++)
	{
		if(max<ans[i])
			max=ans[i];
	}
	cout<<max<<endl;
}