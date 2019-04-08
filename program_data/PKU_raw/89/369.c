int main()
{
	int n;int a[100000];int b[100000];
	cin>>n;
	for(int t=0;t<n;t++)
	{
		a[t]=0;
		b[t]=0;
	}
	int i,j;
	while(cin>>i)
	{
		cin>>j;
		if(i==0&&j==0)
			break;
		else
		{
			a[i]++;
			b[j]++;
		}
	}
	for(int r=0;r<n;r++)
	{
		if(a[r]==0&&b[r]==n-1)
		{
			cout<<r<<endl;
		}
	}
	return 0;
}