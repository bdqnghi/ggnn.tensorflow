
int main()
{
	int n,i,j,x,shu=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]!=x)
		{
			if(shu==0)
				cout<<a[i];
			else
				cout<<" "<<a[i];
			shu++;
		}
	}
	return 0;
}