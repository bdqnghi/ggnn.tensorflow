int main()
{
	int n,a[20000]={0};
	cin>>n;
	int count=n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0)
		{
		for(int j=i+1;j<=n;j++)
			if(a[j]==a[i]) {a[j]=0;count-=1;}
		}
	}
	if(count>1)
	{
		int i;
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)
				{
					cout<<a[i]<<' ';
					count--;
			}
			if(count==1) break;
		}
		for(i=i+1;i<=n;i++)
			if(a[i]!=0) cout<<a[i];
	}
	else 
		for(int i=1;i<=n;i++)
			if(a[i]!=0) cout<<a[i];
		return 0;
}