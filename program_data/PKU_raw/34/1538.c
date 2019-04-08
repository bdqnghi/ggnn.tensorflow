int main()
{
	int n,m,p;
		cin>>n;
		
	if(n==1)
		cout<<"End";
	if(n!=1)
	{	while(1)
		{
		if(n%2==1)
		{
			m=n*3+1;
		cout<<n<<"*3"<<"+1"<<"="<<m<<endl;
		n=m;
		}
		else
		{	p=n/2;
		cout<<n<<"/2"<<"="<<p<<endl;
		n=p;}
		if(n==1)break;
		}
	cout<<"End";}

return 0;
}
