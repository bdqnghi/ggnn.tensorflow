int f(int a,int b)
{
	if (a==b) return a;
	if (a<b) return f(b,a);
	if (a%2==0) return f(a/2,b);
	if (a%2==1) return f((a-1)/2,b);
}
int main()
{
	int x,y;
	cin>>x>>y;
	if (x>=y) cout<<f(x,y)<<endl;
	else cout<<f(y,x)<<endl;
	return 0;

}
