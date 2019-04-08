//C++ program by Ruby;
//to judge whether n could be divided by 3,5,7.
int main()
{
	int n,s;//n for testing number;s for a sumer
	cin>>n;
	s=0;
	if (n%3==0) 
	{
		s=s+1;
		cout<<"3";
	}
	if (n%5==0)
	{
		if (s>=1) cout<<" ";
		s=s+1;
		cout<<"5";
	}
	if (n%7==0)
	{
		if (s>=1) cout<<" ";
		s=s+1;
		cout<<"7";
	}
	if (s==0)  
		cout<<"n"<<endl;
	return 0;
}
