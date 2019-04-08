int main()
{
	int n,i;
	double a,b,x,y;
	cin>>n;
	cin>>a>>b;
	x=b/a;
	for (i=1;i<=n-1;i++)
	{
		cin>>a>>b;
		y=b/a;
		if (y>x)
		{
			if (y-x>0.05)
				cout<<"better"<<endl;
			else
				cout<<"same"<<endl;
		}
		else
		{
			if (x-y>0.05)
				cout<<"worse"<<endl;
			else
				cout<<"same"<<endl;
		}
	}
	return 0;
}