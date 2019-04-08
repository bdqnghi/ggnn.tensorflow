int main()
{
	int n,i,m,j;
	cin>>n;
	for(i=1;i<=n;i++)
		{
			cin>>m;
		int a=1,b=1;
		if(m>2)
		{
	for(j=3;j<=m;j++)
    {
    	a=a+b;
    	b=a-b;

    }
	cout<<a<<endl;
		}
		else
			cout<<"1"<<endl;
		}
	return 0;
}
