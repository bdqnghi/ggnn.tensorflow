int main()
{
	int n,m,x=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int k=0;k<n-1;k++)
	{
		for(int j=k+1;j<n;j++)
		{
			if(a[j]+a[k]==m)
			{
				x=1;
			}
		}
	}
	if(x==1) cout<<"yes";
	else if(x==0) cout<<"no";
	return 0;
}

