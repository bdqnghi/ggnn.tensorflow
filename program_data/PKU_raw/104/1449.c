
int main()
{
	int route(int x, int y);//????
	int x,y;
	cin>>x>>y;
	cout<<route(x,y);
	return 0;
}

int route(int x, int y)
{
	if(x==y)
		return x;
	else
	{
		if(x/2>=y)
			return route(x/2,y);
		else if(x<=y/2)
			return route(x,y/2);
		else
			return route(x/2,y/2);
	}
}