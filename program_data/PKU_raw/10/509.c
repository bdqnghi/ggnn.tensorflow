int main()
{
	int n;
	cin>>n;
	int s[25];
	int max[25];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	max[0]=1;
	for(i=1;i<n;i++)
	{
		int m = 1;
		for(j=0;j<i;j++)
		{
			if(s[i]<=s[j]&&max[j]+1>m)
				m = max[j]+1;
		}
		max[i]=m;
	}
	int p=max[0];
	for(i=1;i<n;i++)
	{
		if(max[i]>p)
			p=max[i];
	}
	cout<<p<<endl;
}