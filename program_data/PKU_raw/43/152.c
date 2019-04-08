
int check(int n)
{
	if(n==2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main()
{
	int m;
	cin>>m;
	for(int i=3;i<=m/2;i++)
	{
		if(check(i)==1&&check(m-i)==1)
			cout<<i<<" "<<m-i<<endl;
	}
	return 0;
}
