int apple(int,int);
int main()
{
	int t,n,m,i;
	cin>>t;//????
	for(i=0;i<t;i++)
	{
		cin>>m>>n;//?????????
		cout<<apple(m,n)<<endl;//??
	}
	return 0;
	}
	int apple(int x,int y)//????
	{
		int number;
		if(x>y&&y!=1)
			number=apple(x-y,y)+apple(x,y-1);//??
		if(x<=y&&x!=1)
			number=1+apple(x,x-1);//??
		if(x==1)
			return 1;//??
		if(y==1)
			return 1;//??
		else
			return number;
	}
