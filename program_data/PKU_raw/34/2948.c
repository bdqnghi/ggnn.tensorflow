void jg(int n)
{
	int i=0,j=0,k=0,tp=0;
	while(n>=1)
	{
	if(n==1)
	{cout<<"End";
	break;}
    else if(n%2==1)
	{cout<<n<<"*3+1="<<n*3+1<<endl;
	n=n*3+1;}
	else
	{cout<<n<<"/2="<<n/2<<endl;
	n=n/2;}
	}
}

int main()
{
	int n;
	cin>>n;
	jg(n);
return 0;
}