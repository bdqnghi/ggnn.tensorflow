int main()
{
	int n;
	cin>>n;
	float s[100],d,a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		s[i]=b/a;
		if(i>0)
		{
			d=s[i]-s[0];
			if(d<-0.05)
				cout<<"worse";
			else if(d>0.05)
				cout<<"better";
			else
				cout<<"same";
			cout<<endl;
		}
	}
}