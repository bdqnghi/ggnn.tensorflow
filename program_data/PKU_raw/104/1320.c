int  common(int x,int y); 
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		cout<<common(x,y);
	}
	return 0;
}
int common(int x,int y)
{
	if(x==y)
	return x;
	else
	{
		int p;
		if(x>y)
		return common((int)x/2,y);
		else
		return common(x,(int)y/2);
	}
}
