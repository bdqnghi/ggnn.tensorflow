int main()
{
	double n,a,b,x,y,sum=0;
	cin>>n>>a>>b;
	while(cin>>x>>y)
	{
		sum++;
		if((y/x-b/a)>0.05) cout<<"better"<<endl;
		else if((b/a-y/x)>0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
		if(sum==n-1) break;
	}
	return 0;
}