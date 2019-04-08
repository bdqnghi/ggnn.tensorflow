int main()
{
	double total[10000],valid[10000],t1,v1,std,x[10000];
	int n;
	cin>>n;
	cin>>t1>>v1;
	std=v1/t1;
	for(int i=0;i<n-1;i++)
	{
		cin>>total[i]>>valid[i];
		x[i]=valid[i]/total[i];
		if(std-x[i]>0.05)
			cout<<"worse"<<endl;
		if(x[i]-std>0.05)
			cout<<"better"<<endl;
		if((std-x[i]<=0.05&&std-x[i]>=0)||(x[i]-std<=0.05&&x[i]-std>=0))
			cout<<"same"<<endl;
	}
	return 0;
}