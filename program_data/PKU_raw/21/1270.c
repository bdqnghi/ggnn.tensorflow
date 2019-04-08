int main()
{
	int n,t=0;
	int a[300],x[300];
	double p,m,b[300],s=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		s+=a[i];
	p=s/n;
	for(int i=0;i<n;i++)
		b[i]=fabs(a[i]-p);
	m=b[0];
	for(int i=0;i<n;i++)
		if(b[i]>m)
			m=b[i];
	for(int i=0;i<n;i++)
		if(b[i]==m)
			x[t++]=a[i];
	for(int i=0;i<t-1;i++)
		cout<<x[i]<<",";
	cout<<x[t-1]<<endl;
}
