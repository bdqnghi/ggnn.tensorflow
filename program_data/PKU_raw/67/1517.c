int main()
{
	int n,i;
	double a[100],b[100],y[100],p,q,rate;
	cin>>n>>p>>q;
	rate=q/p;
	for(i=0;i<n-1;i++)
	{
		cin>>a[i]>>b[i];
		y[i]=b[i]/a[i];
		if(y[i]-rate>0.05)
			cout<<"better"<<endl;
		else if(rate-y[i]>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}
