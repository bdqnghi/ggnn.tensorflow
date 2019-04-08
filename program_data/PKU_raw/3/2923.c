int main()
{
	int i=0,j=0,n,m,k;
	int a[1000];
	cin>>n>>k;
	for(m=0;m<n;m++)
	cin>>a[m];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
