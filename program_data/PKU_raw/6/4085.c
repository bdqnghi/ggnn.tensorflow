int main()
{
	int a[10000],b[10000],c[10000],i,l,n,sum[10000]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		for(l=0;l<a[i]*b[i];l++)
		{
			cin>>c[l];
			if(l<=b[i]||l>=(b[i]*a[i]-b[i]+1)||l%b[i]==0||(l+1)%b[i]==0)
				sum[i]+=c[l];
		}
	}
	for(i=0;i<n;i++)
		cout<<sum[i]<<endl;
	return 0;
}