
int main() {
	int m,n,i,j,a[101][101];
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	for(i=0;i<m+n-1;i++){
		for(j=0;j<=i;j++){
			if(j<m&&(i-j)<n){
			cout<<a[j][i-j]<<endl;
			}
		}
	}
	return 0;
}