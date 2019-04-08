int main()
{
	int n=0,sum=0;
	int i=1;
	cin>>n;
	while(i<=n)
	{
	
	int mark=0;//?7??
	//??7??
	int t=i;
	while(t!=0)
	{
		if(t%10==7)mark=1;//mark=1???7??
		t=t/10;
	}
	//??7???
	if(i%7==0)mark=1;
	if(mark==0)sum+=pow((double)i,2);
	i++;
	}
	cout<<sum<<endl;
	return 0;
}