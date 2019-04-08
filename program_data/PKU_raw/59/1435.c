int main(){
char a[101][101];
int i,j,n,ans,m;
cin>>n;
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++) cin>>a[i][j];
cin>>m;
while (m>1)
{for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
		if (a[i][j]=='@')
		{if ((i>1)&&(a[i-1][j]=='.')) a[i-1][j]='1';
		if ((i<n)&&(a[i+1][j]=='.')) a[i+1][j]='1';
		if ((j>1)&&(a[i][j-1]=='.')) a[i][j-1]='1';
		if ((j<n)&&(a[i][j+1]=='.')) a[i][j+1]='1';}
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++) if (a[i][j]=='1') a[i][j]='@';
	m--;
}
ans=0;
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
		if (a[i][j]=='@') ans++;
cout<<ans;
		 return 0;
}