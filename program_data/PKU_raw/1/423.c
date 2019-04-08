int f(int,int);
int main()
{
	int n,a[32768],i;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		cout<<f(a[i],2)+1<<endl;
	}
	return 0;
}
int f(int a,int p)
{
	int i,sum=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(((double)a/i==a/i)&&(i>=p))
		{   p=i;
			sum=sum+1+f(a/i,p);
		}
	}
	return sum;
}
