int main()
{
	int n;
	cin>>n;
	cout<<endl; 
	float x1,y1,x,y;
	cin>>x1>>y1;
	cout<<endl;
	float t;
	t=y1/x1;
	for(int i=1;i<=n-1;i++)
	{
		cin>>x>>y;
		if(y/x>t+0.05)
			cout<<"better"<<endl;
		else if(y/x<t-0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
}
                   return 0;
}
	