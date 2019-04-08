int main()
{
	int n,x0,y0,x,y;
	double k;
	cin>>n;
	cin>>x0>>y0;
	k=(double)y0/x0;
	for(n;n>=2;n--)
	{
		cin>>x>>y;
		if((double)y/x>k+0.05)
			cout<<"better"<<endl;
		else if((double)y/x<k-0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}