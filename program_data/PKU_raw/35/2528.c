int main()
{
    int n,m,i,j,ii,jj,a[8][8],k;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		int max=0;
		for(j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				ii=i;jj=j;
			}
		}
		for(k=0;k<n;k++)
		{
			if(a[k][jj]<a[ii][jj])
				break;
			if(k==n-1)
			{
				cout<<ii<<"+"<<jj;
				return 0;
			}
		}
	}
	cout<<"No";
	return 0;
}
