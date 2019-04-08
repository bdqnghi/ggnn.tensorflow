int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(((i-1>=0)&&(a[i-1][j]<=a[i][j])||(i-1<0))&&
					((i+1<m)&&(a[i+1][j]<=a[i][j])||(i+1>=m))&&
					((j-1>=0)&&(a[i][j-1]<=a[i][j])||(j-1<0))&&
					((j+1<n)&&(a[i][j+1]<=a[i][j])||(j+1>=n))
					)
				cout<<i<<" "<<j<<endl;
		}
	return 0;
}