struct sha
{
	int gaodu;
	int x;
	int y;
	int shanding;
}mou[100][200],t;
int main()
{
	int m,n;
	cin>>m>>n;
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>mou[i][j].gaodu;
			mou[i][j].x=i;
			mou[i][j].y=j;
			mou[i][j].shanding=0;
		}
	}
	for(i=0;i<=m+1;i++)
	{
		mou[i][n+1].gaodu=0;
		mou[i][0].gaodu=0;
	}
	for(i=0;i<=n+1;i++)
	{
		mou[m+1][i].gaodu=0;
		mou[0][i].gaodu=0;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(mou[i][j].gaodu>=mou[i-1][j].gaodu&&mou[i][j].gaodu>=mou[i+1][j].gaodu&&mou[i][j].gaodu>=mou[i][j-1].gaodu&&mou[i][j].gaodu>=mou[i][j+1].gaodu)
				mou[i][j].shanding=1;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(mou[i][j].shanding==1)
			{
				cout<<mou[i][j].x-1<<" "<<mou[i][j].y-1<<endl;
			}
		}
	}
return 0;
}