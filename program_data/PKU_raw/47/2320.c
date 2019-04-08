int print();
int main()
{
	int m;
	char c;
	cin>>m;
	c=cin.get();
	print();
	return 0;
}
int print()
{
	int a;
	char c='\0';
	cin>>a;
	c=cin.get();
	if(c!='\n')
		print();
	if(c!='\n')
		cout<<c;
	cout<<a;
	return 0;
}
