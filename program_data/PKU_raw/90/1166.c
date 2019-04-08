int methods(int m,int n)
{
	if (m<n)
	{
		return methods(m,m);
	}
	if ((m>=n)&&(n>1))
	{
		return (methods(m-n,n)+methods(m,n-1));
	}
	if ((n<=1))
	{
		return 1;
	}
}
int main()
{
	int m,n,t,i;
	cin >>t;
	for (i=0;i<t;i++)
	{
		cin >>m>>n;
		cout <<methods(m,n)<<endl;
	}
	return 0;
}