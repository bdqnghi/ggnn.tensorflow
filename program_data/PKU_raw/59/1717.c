int main(){
	int N,i,j,m,k,count=0;
	cin>> N;
	const int n=N;
	int a[101][n+2][n+2];
	char p;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++){
		cin>>p;
		switch (p){
		case '.':a[1][i][j]=1;break;
		case '#':a[1][i][j]=-200;break;
		case '@':a[1][i][j]=2;break;
		}
	}
	cin>>m;
	for(k=1;k<=m-1;k++)
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		a[k+1][i][j]=a[k][i][j];
	for(k=1;k<=m-1;k++){
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			if (a[k][i][j]>1)
			{a[k+1][i-1][j]=a[k][i-1][j]+1;
			 a[k+1][i+1][j]=a[k][i+1][j]+1;
			 a[k+1][i][j-1]=a[k][i][j-1]+1;
			 a[k+1][i][j+1]=a[k][i][j+1]+1;
			}

		}
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++){
		if(a[m][i][j]>1) count++;
	}
	cout<<count;
	return 0;
}