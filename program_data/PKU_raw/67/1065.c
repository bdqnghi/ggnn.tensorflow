int main()
{
	int i,n;
	double k,s,g[200];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		cin>>s;
		g[i]=s/k;
	}
	for(i=2;i<=n;i++)
	{
		if(g[1]-g[i]>0.05)
			cout<<"worse"<<endl;
		if(g[i]-g[1]>0.05)
			cout<<"better"<<endl;
		if(g[i]-g[1]<=0.05&&g[i]-g[1]>=(-0.05))
			cout<<"same"<<endl;
	}
	return 0;
}

