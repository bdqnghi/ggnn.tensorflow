int last(int k)
{
	if (k%2==0)
	{
		return (k/2);
	}
	else
	{
		return ((k-1)/2);
	}
}

int main()
{
	int x,y;
	cin>>x>>y;
	while (x!=y)
	{
		if (x>y)
		{
			x = last(x);
		}
		else
		{
			y = last(y);

		}
	}
	cout<<x;
}