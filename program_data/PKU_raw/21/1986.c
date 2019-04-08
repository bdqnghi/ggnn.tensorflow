int main()
{
	int n,i;
	float a[300],s=0,max=0,l;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];s+=a[i];
	}
	s/=n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-s)>=max)
		{
			max=fabs(a[i]-s);
			l=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-s)==max&&l!=a[i])
			cout<<a[i]<<",";
		if(fabs(a[i]-s)==max&&l==a[i])
			cout<<a[i];
	}
	return 0;
}