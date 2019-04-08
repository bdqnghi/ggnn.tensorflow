int main()
{
	void f(int);
	int m;
	cin>>m;
	f(m);
	return 0;
}
void f(int m)
{
	if(m==1) 
		cout<<"End";
	else if(m%2==0)
	{   
		cout<<m<<"/2=";
		m=m/2;
		cout<<m<<endl;
		f(m);
	}
	else 
	{
		cout<<m<<"*3+1=";
		m=3*m+1;
		cout<<m<<endl;
		f(m);
	}
}