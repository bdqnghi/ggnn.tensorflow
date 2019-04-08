

int f(int x,int y);
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<f(x,y);
}
int f(int x,int y)
{
	if(x==y) return x;
	if(x>y)
	{
		x=x/2;
		return f(x,y);
	}
		if(x<y)
		{
			y=y/2;
			return f(x,y);
		}
}
