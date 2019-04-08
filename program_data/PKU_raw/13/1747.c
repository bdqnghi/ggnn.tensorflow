int main()
{
	int n,a[20000],l=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<a[0];
	for (int j=1;j<n;j++)
	{
		l=0;
		for (int k=j-1;k>=0;k--)
		{
			if (a[j]!=a[k])
				l=l;
			else l=l+1;
		}
		if (l==0)
			cout<<" "<<a[j];
	}
	cout<<endl;
	return 0;
}


