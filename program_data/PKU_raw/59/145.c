
int main( )
{
    int n,i,j,k,m,a[101][101],b[101][101];
	char s[101][101];
	cin>>n;
    for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	{ cin>>s[i][j];
	if(s[i][j]=='.')
	{a[i][j]=1;}
	if(s[i][j]=='#')
	{a[i][j]=0;}
	if(s[i][j]=='@')
	{a[i][j]=-1;}
	}
	}
	cin>>m;
	for(i=1;i<m;i++)
	{ for(j=1;j<=n;j++)
	{for(k=1;k<=n;k++)
	{ if(a[k][j]==-1)b[k][j]=1;
	}}
	 for(j=1;j<=n;j++)
	{for(k=1;k<=n;k++)
	{ if(b[k][j]==1)
	{ if(a[k][j-1]==1)a[k][j-1]=-1;
      if(a[k][j+1]==1)a[k][j+1]=-1;
	  if(a[k+1][j]==1)a[k+1][j]=-1;
	  if(a[k-1][j]==1)a[k-1][j]=-1;}
	}}
	memset(b,0,sizeof(b));}
	m=0;
	for(i=1;i<=n;i++)
	{ for(j=1;j<=n;j++)
	{ if(a[i][j]==-1) m++;}}
	cout<<m;
	return 0;
}
