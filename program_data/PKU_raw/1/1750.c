int f(int a,int b)
{
	if(a==b)return 1;
	if(b>a)return 0;
	if(a%b!=0)return f(a,b+1);
	if(a%b==0)return f(a,b+1)+f(a/b,b);
}
int main()
{
	int n=0,i=0,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		y=2;
		cout<<f(x,y)<<endl;
	}
	return 0;
}