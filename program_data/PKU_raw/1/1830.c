int begin=2;
int main()
{
	int f(int);
	int n=0,x=0,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		cout<<f(x)+1<<endl;
	}
	return 0;
}
int f(int x)
{
	int i=0;
	int left=0;
	int num=0;
	for(i=begin;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			num++;
			left=x/i;
			begin=i;
			num+=f(left);
		}
	}
	//if(num!=0)
	    begin=2;
	    return num;
	//else
		//return 0;
}
