
int F(int a)
{
	if(a%2==0)
		a=a/2;
	else
		a=(a-1)/2;
	return a;
}

int main()
{
	int a,b;
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
			a=F(a);
		if(a<b)
			b=F(b);
	}
	cout<<a;
	return 0;
}