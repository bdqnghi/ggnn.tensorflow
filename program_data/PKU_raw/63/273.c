int main(){
	int s,n,m;
	int a[100][100],b[100][100],c[100][100];
    int i,j,k;
	cin>>s>>n;
	for(i=0;i<=s-1;i++)
		for(j=0;j<=n-1;j++)
			cin>>a[i][j];
	cin>>n>>m;
	for(i=0;i<=n-1;i++)
			for(j=0;j<=m-1;j++)
				cin>>b[i][j];//s*n???n*m??
	for(i=0;i<=99;i++)
		for(j=0;j<=99;j++)
			c[i][j]=0;
	for(i=0;i<=s-1;i++)
		for(j=0;j<=m-1;j++)
			for(k=0;k<=n-1;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
	for(i=0;i<=s-1;i++)
		for(j=0;j<=m-1;j++)
		{
			if(j!=m-1)
			    cout<<c[i][j]<<" ";
			else
				cout<<c[i][j]<<endl;
		}
	return 0;	
}