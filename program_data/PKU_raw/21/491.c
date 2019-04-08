int main()
{
	int i,n,m;
	double sum=0,ave=0,max=0,g[1000],s[1000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>g[i];
	for(i=0;i<n;i++)
		sum=sum+g[i];
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		if((g[i]-ave)>0)
			s[i]=g[i]-ave;
		if((g[i]-ave)<0)
			s[i]=ave-g[i];
	}
	for(i=0;i<n;i++)
	{
		if(s[i]>=max)
		{
			max=s[i];
			m=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==max&&i<m)
			cout<<g[i]<<",";
		if(s[i]==max&&i==m)
			cout<<g[i];
	}
	return 0;
}
