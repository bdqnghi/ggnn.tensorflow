int main()
{
	int n,i,a[20000];
	cin>>n;
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i-=1;
				n-=1;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i>0)
			cout<<" ";
		cout<<a[i];
	}
	return 0;
}