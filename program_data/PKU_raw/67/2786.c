int main()
{
	int n;
	cin>>n;
	double yuan=0.0,z=0.0;
	double yuanx=0,yuany=0;
   double x=0,y=0;
	cin>>yuanx>>yuany;
	yuan=yuany/yuanx;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		z=y/x;
		if(z>yuan)
		{
			if(z-yuan>0.05)cout<<"better"<<endl;
			else cout<<"same"<<endl;
		}
		else
		{
			if(yuan-z>0.05)cout<<"worse"<<endl;
			else cout<<"same"<<endl;
		}
	}
	return 0;
}