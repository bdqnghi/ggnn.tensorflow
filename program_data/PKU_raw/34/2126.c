int main()
{
    int n;
	int jiaogu(int n);
    cin>>n;
    if(n==1)
		cout<<"End"<<endl;
    else
    {
		jiaogu( n);
	}
	
	return 0;
}
void jiaogu(int n)          
{          
	do
	{
		if(n%2==0)
		{n=n/2;
		cout<<2*n<<"/"<<"2="<<n<<endl;}
		else
		{n=3*n+1;
		cout<<(n-1)/3<<"*3+1="<<n<<endl;}
	}while(n!=1);
	cout<<"End"<<endl;
}
