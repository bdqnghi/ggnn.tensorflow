int main()
{
  int x,y;
  cin>>x>>y;

  int tree(int,int);
  cout<<tree(x,y);

}

int tree(int x,int y)
{
	while(x!=y)

	{
	      if(x>y)
			  x=x/2;
		  else
			  y=y/2;
	}

	return x;

}