int shorten(int a)
{
	while(a%10==0)
		a/=10;
	return a;
}
void reverse(int a)
{
	cout<<a%10;
	a/=10;
	if(a!=0)
		reverse(a);
}
int main()
{
	int a;
	for(int i=1;i<=6;i++)
	{
		int b=0;
		cin>>a;
		if(a<0)
			cout<<"-";
		a=abs(a);
		if(a>0)
			a=shorten(a);
		reverse(a);
		cout<<endl;
	}
	return 0;
}