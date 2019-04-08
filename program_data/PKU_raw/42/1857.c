int main()
{
	int a[100000],b,c,f=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		a[i-1]=b;
	}
	cin>>c;
	for(int j=1;j<=n;j++)
	{
		if(a[j-1]-c!=0)
		{
			if(f==0)
			{
				cout<<a[j-1];
				f++;
			}
			else
			{
				cout<<" "<<a[j-1];
			}
		}
	}
	return 0;
}
