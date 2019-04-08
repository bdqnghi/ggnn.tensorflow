int a[10][10],b[10][10];
int dx[]={1,1,1,0,0,0,-1,-1,-1};
int dy[]={-1,0,1,-1,0,1,-1,0,1};
void change()
{
	for(int i=1;i<=9;++i)
		for(int j=1;j<=9;++j)
			b[i][j]=a[i][j];
	for(int i=1;i<=9;++i)
		for(int j=1;j<=9;++j)
		{
			if(b[i][j]!=0)
			{
				
				for(int k=0;k<9;++k)
				{
					a[i+dx[k]][j+dy[k]]+=b[i][j];
				}
			}
		}
}
int main()
{
	int m,n;
	cin>>m>>n;
	a[5][5]=m;
	for(int i=0;i<n;++i)
	{change();}
	for(int i=1;i<=9;++i)
	{
		for(int j=1;j<=9;++j)
		{
			if(j!=9)cout<<a[i][j]<<" ";
		else cout<<a[i][j]<<endl;
		}
	}
}