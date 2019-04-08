int main()
{
	void f(int x);
	int n,i;
	for(i=0;i<6;i++)
	{
		cin>>n;
		if(n>0)//?n?????
		{
			while(n%10==0)
				n=n/10;
			f(n);
			cout<<endl;
		}
		if(n<0)
		{
			n=-n;
			while(n%10==0)
				n=n/10;
			cout<<'-';
			f(n);
			cout<<endl;
		}
		if(n==0)
			cout<<'0'<<endl;
	}
	return 0;
}
void f(int x)//??????
{
	cout<<x%10;
	if((x/10)>0)
	{
		x=x/10;
		f(x);
	}
}