int main()
{
	int n,a,b,t=0,m=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if( (a-90)*(a-140)<=0 &&(b-60)*(b-90)<=0 )
		 t+=1;
		else t=0;
		if( t>m ) m=t;
	}
	cout<<m<<endl;

	return 0;
}
