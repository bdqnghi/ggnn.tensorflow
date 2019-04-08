int main()
{
	int n;
	cin>>n;
	float x[n],y[n];
	float dis=0;
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{   float b=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			float a=sqrt(1.0*b);
             if(a>=dis)dis=a;
		}
	cout<<dis<<endl;
	return 0;
}