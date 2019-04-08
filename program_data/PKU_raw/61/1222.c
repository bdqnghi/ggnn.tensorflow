int main()
{
	int n, m, i, x, y, temp;
	cin>>n;
	while(cin>>m)
	{
		x=1;
		y=1;
		for (i=0;i<m-2;i++)
		{
			x=y+x;
			temp=y;
			y=x;
			x=temp;
		}
	cout<<y<<endl;
	}
	return 0;
}