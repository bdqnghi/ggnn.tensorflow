int main ()
{
	int n;
	cin >> n;
	double x[100],y[100],s=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)>s)  s=pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2);
	cout<<fixed<<setprecision(4)<<sqrt(s)<<endl;
	return 0;
}
