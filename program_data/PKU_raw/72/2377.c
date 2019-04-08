int main(){
	int n,m,a[21][21];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			if(i==0||j==0||i==n+1||j==m+1) a[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]) cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}
			
