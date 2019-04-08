int main()
{
	char a,b;
	cin>>a;
	cout<<a;
	while((b=getchar())&&(b!='\n'))
	{
		if(b!=' ')
			cout<<b;
		if(b==' '&&a!=' ')
			cout<<b;

		a=b;
	}
	return 0;
}
