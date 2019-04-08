int main()
{
	int n,a[20000],t;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<a[0];
	for(int i=1;i<n;i++)
	{
		t=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i]&&j!=i)
				t+=1;
		}
		if(t>=1)
			continue;
		else if(t==0)
			cout<<" "<<a[i];
	}
	return 0;
}