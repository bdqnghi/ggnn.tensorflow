int main()
{
	int n;
	float x[1000],y[1000],max,b;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	max=(x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			b=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			if(b>max)
				max=b;
		}
	}
	max=sqrt(max);
	printf("%.4f\n", max);
	return 0;
}