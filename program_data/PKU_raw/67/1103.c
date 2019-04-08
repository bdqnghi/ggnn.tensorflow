int main()
{
	int i,j,n;
	double x[100][2];
	double e[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>x[i][j];
		}
		e[i]=x[i][1]/x[i][0];
	}
	for(i=1;i<n;i++)
	{
		if((e[i]-e[0])>0.05)cout<<"better"<<endl;
		if((e[0]-e[i])>0.05)cout<<"worse"<<endl;
		if((e[i]-e[0])<0.05&&(e[0]-e[i])<0.05) cout<<"same"<<endl;
	}
	return 0;
}
