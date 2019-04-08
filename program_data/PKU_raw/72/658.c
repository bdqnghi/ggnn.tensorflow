int main()
{
	int n,q,i,j,a[30][30],m;
	int (*b)[30];
	b=a;
	cin>>n>>m;
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=m+1;j++)
		{
			*(*(b+i)+j)=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>*(*(b+i)+j);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(*(*(b+i)+j)>=*(*(b+i+1)+j)&&*(*(b+i)+j)>=*(*(b+i-1)+j)&&*(*(b+i)+j)>=*(*(b+i)+j-1)&&*(*(b+i)+j)>=*(*(b+i)+j+1))
			{
				cout<<i-1<<" "<<j-1<<endl;
			}
		}
	}
	
    cin>>q;
    return 0;
}
