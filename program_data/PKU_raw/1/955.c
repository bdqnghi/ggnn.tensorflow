int f(int x,int y)
{
	int s=0,i;
	for(i=y;i>1;i--)//???????????
	{
		if(x%i==0)
			s+=f(x/i,i);//i?x/i????????1
	}
	if(x==1)
		return 1;
	return s;
}
int main()
{
	int n,i,a[50];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cout<<f(a[i],a[i])<<endl;
	return 0;
}