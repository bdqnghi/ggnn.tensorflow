int f(int a,int b)
{
	int m,i,c[1000];
	for(i=1;i<=a;i++)
	c[i]=0;
        c[a]=b;
	do
	{
		c[a]=c[a]+a;
	for(i=a-1;i>=1;i--)
	{
		if(c[i+1]%(a-1)!=0) break;
		else c[i]=c[i+1]*a/(a-1)+b;
	}
	}
	while(i>=1);
        m=c[1];
	return(m);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<f(n,k);
	return 0;
}
