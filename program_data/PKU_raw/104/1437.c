int main()
{
	int common(int,int);
	int x=0,y=0;
	cin>>x>>y;
	cout<<common(x,y)<<endl;
	return 0;
}
int common(int x,int y)
{
	if(x==y)
		return x;
	if(x>y)
		return common(x/2,y);
	else
		return common(x,y/2);
}
