int main( )
{
	int n,i=1;
	float a,b,c,d;
	cin>>n;
	cin>>a>>b;
	n=n-1;
	for(i=1;i<=n;i++)
	{
		cin>>c>>d;

		if(d/c-b/a>0.05) cout<<"better"<<endl;
		else if(b/a-d/c>0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	
	return 0;
}