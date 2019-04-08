int main()
{
	int n,a,b,c;//????
	cin>>n;//??n
    if(n==1)
		cout<<"End";
	else
	{
		do
	{
		if(n%2==1)
			{
				cout<<n<<"*3+1="<<(n*3+1)<<endl;//?n????
		     	n=n*3+1;
		    }
		else  {cout<<n<<"/2="<<(n/2)<<endl;//?n????
		         n=n/2;}
	}      
	while(n!=1);
	cout<<"End";
	}

return 0;
}