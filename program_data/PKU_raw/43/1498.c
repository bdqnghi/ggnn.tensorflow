int work(int n)
{
	for(int i=3;i<=sqrt(n);i+=2)
	if(n%i==0)return 0;
	return 1;
}
int main()
{
	int m,i;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		if(work(i)&&work(m-i))
		cout<<i<<' '<<m-i<<endl;
	}
	return 0;
}
