void d(int);
int main()
{
	int a;
	cin>>a;
	d(a);
	return 0;
}
void d(int a)
{
	while(a!=1)
	{
		if(a%2==0)
		{
			cout<<a<<"/2="<<a/2<<'\n';
			a=a/2;
		}
		else
		{
			cout<<a<<"*3+1="<<a*3+1<<'\n';
			a=a*3+1;
		}
	}
	cout<<"End"<<endl;
}
