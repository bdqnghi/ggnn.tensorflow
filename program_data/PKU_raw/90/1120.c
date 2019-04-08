
int an(int m,int n)
{
	int c;
	if(n==1||m==0||m==1)
		c=1;
	else 
	{	if(m<0)
			c=0;
		else
			c=an(m,n-1)+an(m-n,n);	
	}
	return (c);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,x;
		cin>>m>>n;
		x=an(m,n);
		cout<<x<<endl;

	}
	return 0;
}

