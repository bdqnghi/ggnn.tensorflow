int main()
{
	int i,n;
	double a,b;
	double x,y;
	double another,effect;
	cin>>n;
	cin>>a>>b;
	effect=b/a;
	for(i=1;i<n;i++)
	{
		cin>>x>>y;
		another=y/x;
		if(another-effect>0.05)
		{
			cout<<"better"<<endl;
		}
		if(effect-another>0.05)
		{
			cout<<"worse"<<endl;
		}
		if(fabs(another-effect)<=0.05)
		{
			cout<<"same"<<endl;
		}
	}
	return 0;
}