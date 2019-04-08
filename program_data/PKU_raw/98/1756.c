int main()
{
	int n, count = 0, j = 1, l;
	char a[41];
	cin >> n;
	for ( int i=1;i<=n;i++)
	{
		cin>>a;
		l=strlen(a);
		count=count+l;
		if(count<80&&count!=l)
		{
			cout<<" "<<a;
			count++;
		}
		else if(count<80&&count==l)
		{
			cout<<endl<<a;
		}
		
		else
		{
			cout<<endl;
			cout<<a;
			count=l;
		}
	}
	return 0;
}
	