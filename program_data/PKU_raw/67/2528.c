

int main()
{
	int n,t,e;
	float eff[100],mod;
	cin>>n;
	cin>>t>>e;
	mod=e*1.0/t;
	for(int i=0;i<n-1;i++)
	{
		cin>>t>>e;
		eff[i]=e*1.0/t;
	}
	for(int i=0;i<n-1;i++)
	{
		if((eff[i]-mod)>0.05)
			cout<<"better";
		else if((mod-eff[i])>0.05)
			cout<<"worse";
		else cout<<"same";
		cout<<"\n\n";
	}
	return 0;
}

