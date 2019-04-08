int main()
{
	int n; cin>>n;
	int i;
	double a[n][2];
	cin>>a[0][0]>>a[0][1];
	double x,y;
	x=a[0][1]/a[0][0];
	for (i=1;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		y=a[i][1]/a[i][0];
		if (y-x>0.05) cout<<"better"<<endl;
		else if (x-y>0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}
