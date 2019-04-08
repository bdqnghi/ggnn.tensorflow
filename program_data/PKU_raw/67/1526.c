int main()
{
	double a[10000],b[10000];
	int i,n;
	cin>>n;
	cin>>a[0]>>b[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(100*(b[i]/a[i]-b[0]/a[0])>5)cout<<"better"<<'\n';
		else if(100*(b[0]/a[0]-b[i]/a[i])>5)cout<<"worse"<<'\n';
		else cout<<"same"<<'\n';
	}
	cout<<endl;
	return 0;
}
