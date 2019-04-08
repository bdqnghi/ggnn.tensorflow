int f[26]={0};
int b[26]={0};
int main()
{
	int n,k,i,j,tmax,ti;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>b[i];
	f[0]=1;
	for(i=1;i<n;i++)
	{
		tmax=1;
		for(j=i-1;j>=0;j--)
		{
			if(b[j]>=b[i]&&f[j]+1>=tmax)
			{
				tmax=f[j]+1;
			}
		}
		f[i]=tmax;
	}
	tmax=-1;
	for(i=0;i<n;i++)
	{
	//	cout<<f[i]<<endl;
		if(f[i]>tmax)
			tmax=f[i];
	}
	
	cout<<tmax<<endl;
	return 0;
}
