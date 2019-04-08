void f(int x)
{
	int s;
	if(x==1)
		cout<<"End"<<endl;
	else
	{
		if(x%2==1)
			{
			s=x*3+1;
			cout<<x<<"*3+1="<<s<<endl;
			f(s);
			}
		if(x%2==0)
		{
			s=x/2;
			cout<<x<<"/2="<<s<<endl;
			f(s);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	return 0;
}