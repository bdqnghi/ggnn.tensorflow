int main(void)
{
	int m,n,i,j,k,t=0,a[101][101]={0},x[4]={0,1,0,-1},y[4]={1,0,-1,0};
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	i=1,j=0,k=0;
	while(a[i+x[k]][j+y[k]]!=0)
	{
		cout<<a[i+x[k]][j+y[k]];
		t++;
		a[i+x[k]][j+y[k]]=0;
		if(t<m*n) cout<<endl;
		i+=x[k],j+=y[k];
		if(a[i+x[k]][j+y[k]]==0) k=(k+1)%4;
	}
}
