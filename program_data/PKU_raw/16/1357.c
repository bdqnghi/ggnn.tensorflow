int main()
{
	int a,b,c;
	cin>>a;
	for(int i=1;;i++)
	{
		b=a%10;
		cout<<b;
		c=a/10;
		if(c==0)
			break;
		a=c;
	}
}
