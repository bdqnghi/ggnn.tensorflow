int sushu(int x)
{
	int a,b,t=2;
	b=sqrt(x);
	for (int i=2;i<=b;i++)
	{
		if (x%i==0)
		{
			t=i;
			break;
		}
		else {t=i+1;}
	}
	if (t>b)
		a=1;
	else a=0;
	return (a);
}
int main()
{
	int n,c;
	cin>>n;
	for (int j=3;j<=(n/2);j++)
	{
		c=n-j;
		if (sushu(c)+sushu(j)==2)
			cout<<j<<" "<<c<<endl;
	}
	return 0;
}
