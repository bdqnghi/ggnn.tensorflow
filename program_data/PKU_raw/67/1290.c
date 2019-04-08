int main()
{
	int n,i;
	double a,b,c;
	cin>>n;
	cin>>a>>b;
	c=b/a;
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		if(b/a-c>0.05)
			cout<<"better"<<endl;
		if(b/a-c<-0.05)
			cout<<"worse"<<endl;
		if(b/a-c>=-0.05&&b/a-c<=0.05)
			cout<<"same"<<endl;
	}
	return 0;
}