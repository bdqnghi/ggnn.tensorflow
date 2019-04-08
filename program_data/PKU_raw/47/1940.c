int i;
void f(int n)
{
	int a;
	cin>>a;
	if(n==1)
		cout<<a<<" ";
	else
	{
		f(n-1);
		cout<<a;
		if(n!=i)
			cout<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	i=n;
	f(n);
	return 0;
}