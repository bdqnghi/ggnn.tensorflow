int main()
{
	int n,m; //n?????
	cin>>n;
	m=0;
	if (n%3==0)	
	{
		m=1;
		cout<<3;
		if (n%5==0) cout<<" "<<5;
		else;
		if (n%7==0) cout<<" "<<7;	
		else;
	}
	else
	{
		if (n%5==0) 
		{
			m=1;
			cout<<5;
		if (n%7==0) cout<<" "<<7;	
		else;
		}
		else 
		{
			
			if (n%7==0) 
			{
				cout<<7;
				m=1;
			}
			else;
		}
	}
	if (m==0) cout<<"n";
	else;
	return 0;
}