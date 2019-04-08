
int main()
{ 
	int n,length=0,l;
	cin>>n;
	char a[1000][40];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if (i==n-1)
		{	cout<<a[i]<<endl;
		break;}
		if (length+l+1+strlen(a[i+1])<=80)
		{
			cout<<a[i];
			cout<<' ';
			length+=l+1;
		}
		else 
		{
			cout<<a[i];
			cout<<endl;
			length=0;
		}
		
	}








	return 0;
}