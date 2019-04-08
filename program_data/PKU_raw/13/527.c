int main()
{
	int b[20000]={0},a[20000],i,n,j,flag = 0;
	cin>>n;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	for(i=0;i<=n-1;i++)
		for(j=n-1;j>=i+1;j--)
			if(a[i]==a[j])b[j]=1;
	for(i=0;i<=n-1;i++)
		if(b[i]==0)
		{
			if(flag==0)
			{
				cout<<a[i];
				flag=1;
				continue;

			}
			cout<<" "<<a[i];
		}
	return 0;
			}
