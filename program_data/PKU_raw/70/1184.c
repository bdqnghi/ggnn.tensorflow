int main()
{
	int n,i,j;
	cin>>n;
	double a[100],b[100],max=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])>max)
			{
				max=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
			}
		}
	}
	printf("%.4lf",sqrt(max));
	return 0;
}
