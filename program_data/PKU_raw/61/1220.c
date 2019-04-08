int main()
{
	int f(int a);
	int i,n,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>c;
	cout<<f(c)<<endl;}
	return 0;
}

int f(int a)
{
	int b;
	if(a<0) {cout<<"error";b=-1;}
	else if (a==1||a==2) b=1;
	else b=f(a-1)+f(a-2);
	return b;
}
