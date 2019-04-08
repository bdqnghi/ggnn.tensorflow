int main()
{
	int i,n;
	cin>>n;
	double a[100001],b[19991],ans=0.0;
	int mmax=0;
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	{
        if((sqrt)((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>ans)
		{
			ans=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));		
			mmax=i;
		}
	}
	printf("%.4f\n",ans);
}
