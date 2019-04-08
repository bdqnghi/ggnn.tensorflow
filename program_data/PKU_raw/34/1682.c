void f(int x)
{
	if(x==1) {cout<<"End";return;}
	if(x%2==0)                                 //???????
	{
		cout<<x<<"/2="<<x/2<<endl;
		cout<<endl;
		f(x/2);
	}
	else
	{
		cout<<x<<"*3+1="<<x*3+1<<endl;
		cout<<endl;
		f(x*3+1);
	}
}

int main(void)
{
	int n;
	cin>>n;
	f(n);
	return 0;
}