int fjys(int x,int y)
{
	if(x<y)
		return 0;
	int i,n=1;
	for(i=y;i<x;i++)
	{
		if(x%i==0)
		{
			n+=fjys(x/i,i);
		}
	}
	return n;
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<fjys(a[i],2)<<endl;
	}
	return 0;
}