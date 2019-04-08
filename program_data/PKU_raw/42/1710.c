int main()
{
	int n,i,m,x=0;
	int a[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=0;i<n;i++)
	{
		if(a[i]!=m)
		{
			x++;
			if(x==1)
			{
				cout<<a[i];
			}
			else
			{
				cout<<" "<<a[i];
			}
		}
	}
	return 0;
}