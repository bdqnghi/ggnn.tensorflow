int main()
{
 	int b,c,d=0,e=0,i,j,k,l,m,n;
 	int a[101][101]={0};
	cin>>k;
 	for (i=1;i<=k;i++)
 	{
		cin>>m>>n;
		for (b=1;b<=m;b++)
		{
		 	for (c=1;c<=n;c++)
		 	{
			 	cin>>a[b][c];d=d+a[b][c];
			}
		}
	 	for (b=2;b<=m-1;b++)
	 	{
		 	for (c=2;c<=n-1;c++)
		 	{
			 	e=e+a[b][c];
			}
		}
	cout<<d-e<<endl;
	d=0;
	e=0;
	}


}	 
