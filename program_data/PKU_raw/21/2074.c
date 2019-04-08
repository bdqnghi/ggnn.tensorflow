int main()
{
	int n,i,g,k;
	double sum=0,m;
	double t,max,c,d;
	cin>>n;
	int a[400]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	for(i=0;i<n-1;i++)
		for(k=0;k<n-1;k++)
			if(a[k]>a[k+1])
			{
				g=a[k+1];
				a[k+1]=a[k];
				a[k]=g;
			}
	t=sum/n;
	max=(a[n-1]-t)>0?(a[n-1]-t):(-a[n-1]+t);
	m=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(a[i]-t<0)
			c=t-a[i];
		else
			c=a[i]-t;
		if(c-max>=0)
		{
			max=c;
			m=a[i];
		}
	}
	cout<<m;
	for(i=0;i<n;i++)
	{
		if(a[i]-t<0)
			d=t-a[i];
		else
			d=a[i]-t;
		if(d-max<0.000000001&&d-max>-0.000000001&&a[i]!=m)
			cout<<","<<a[i];
	}
	return 0;
}