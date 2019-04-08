int main()
{
	int n,m;
	cin>>n>>m;
	int f(int,int);
	cout<<f(n,m)<<endl;
	return 0;
}
int f(int a,int b)
{
	int cr;
	if(a==b) cr=a;
	else if(a>b) cr=f(a/2,b);
	else cr=f(a,b/2);
	return cr;
}