
int main()
{
	int i,j,m,n,temp;
	int a[100];
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=n-m;i>=1;i--)
	{
		for(j=0;j<m;j++)
		{
			temp=*(a+i+j);
			*(a+i+j)=*(a+i+j+1);
			*(a+i+j+1)=temp;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i<n)
		cout<<a[i]<<" ";
		else
		cout<<a[i]<<endl;
	}
	return 0;
}