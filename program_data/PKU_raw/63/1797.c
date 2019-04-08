int main()
{
	int a[100][100]={0},b[100][100]={0},c[100][100]={0},m1,n1,m2,n2,i,j,l;
	cin>>m1>>n1;
	for(i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	cin>>m2>>n2;
	for(i=0;i<m2;i++)
		for(int j=0;j<n2;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(l=0;l<n1;l++ )
			{
			c[i][j]+=a[i][l]*b[l][j];
			}
	for(i=0;i<m1;i++)
	{
    	for(j=0;j<n2;j++)
		{
		if(j<n2-1)
		{
		 cout<<c[i][j]<<" ";
		}
		if(j==n2-1)cout<<c[i][j]<<endl;
		}
	}
	return 0;
}
