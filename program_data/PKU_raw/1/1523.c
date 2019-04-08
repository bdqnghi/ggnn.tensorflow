int main()
{
	int f(int,int);
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<f(a,a)<<endl;
	}
	return 0;
}
int f(int m,int k)
{
	int i,sum=0;
	if(m==1) sum=1;
	for(i=m;i>1;i--)
	{  
		if(m%i==0&&i<=k)
			sum+=f(m/i,i);}
	return sum;
}