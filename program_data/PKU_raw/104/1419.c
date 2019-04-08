int P(int a,int b)
{
	if (a==b)
	{
		return a;
	}
	return P(a/2,b/2);
}
int main()
{
	int a,b;
	cin>>a>>b;

	int i,j;
	for (i=0;a>>i!=0;i++);
	for (j=0;b>>j!=0;j++);
	if (i>j)
	{
		a>>=(i-j);
	}
	else
	{
		b>>=(j-i);
	}
	cout<<P(a,b);
	return 0;
}