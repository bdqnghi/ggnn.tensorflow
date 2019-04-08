int jiaogu(int a)
{
	if(a==1)
	{
		cout<<"End"<<endl;
		return 0;
	}
	if(a%2==1)
	{
		cout<<a<<"*3+1="<<a*3+1<<endl;
		a=3*a+1;
	}
	if(a%2==0)
	{
		cout<<a<<"/2="<<a/2<<endl;
		a=a/2;
	}
	jiaogu(a);
	return 0;
}
int main()
{
	int n;
	cin>>n;
	jiaogu(n);
	return 0;
}