//???
int n,k;

int f(int s,int m)
{
	m=m*n+k;
	if(s==1)
	{
		cout<<m<<endl;
		return 1;

	}
	if(m%(n-1)==0&&f(s-1,m/(n-1))) return 1;
	return 0;
}

int main()
{
	cin>>n>>k;
	int i;
	for(i=1;;i++)
	{
		if(f(n,i)) break;
	}
	return 0;
}
