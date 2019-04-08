int main()
{
	int n=0,i=0;
	double a[100],b[100];
	double c[100];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=b[i]/a[i];
	}
	for(i=2;i<=n;i++)
	{
		if(c[i]-c[1]>0.05)
			cout<<"better"<<endl;
		else if(c[1]-c[i]>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}