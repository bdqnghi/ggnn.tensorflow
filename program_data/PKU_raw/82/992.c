int main()
{
	int i,n,a,b,x=0,hour=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{x=x+1;
		if(x>hour)
			hour=x;}
		     else x=0;
	}
	cout<<hour<<endl;
	return 0;
}

