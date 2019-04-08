int main()
{
	int n,i,j,k;
	double a[1000],b[1000];
	double dis=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])>dis*dis)
			{
				dis=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
			}
		}
	}
	printf("%.4f\n", dis);
}