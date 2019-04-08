int main()
{
	int n,i,j;
	double a[2000],b[2000],k,max=0;
	cin>>n;
	for(i=0;i<n;i++)
	   cin>>a[i]>>b[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			k=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
			if(k>max)
				max=k;
		}
		max=sqrt(max);
	cout<<fixed<<setprecision(4)<<max<<endl;

return 0;
}
