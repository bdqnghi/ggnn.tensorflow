double mou[20][20];
int m,n;
int judge(int x,int y)
{
	double sum=0,s=0;
	if(x+1<=m)
	{
		if(mou[x+1][y]<=mou[x][y])
		sum++;
		s++;
	}
	if(x-1>=0)
	{
		if(mou[x-1][y]<=mou[x][y])
		sum++;
		s++;
	}
	if(y+1<=n)
	{
		if(mou[x][y+1]<=mou[x][y])
		sum++;
		s++;
	}
	if(y-1>=0)
	{
		if(mou[x][y-1]<=mou[x][y])
		sum++;
		s++;
	}
	if(sum==s)
	return 1;
	else
	return 0;
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mou[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(judge(i,j))
			cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}
		
