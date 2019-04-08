int main(){
	int m,n,i,j;
	cin>>m>>n;
	int bo[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>bo[i][j];
	if(bo[0][0]>=bo[0][1]&&bo[0][0]>=bo[1][0])
		cout<<0<<" "<<0<<endl;
	for(j=1;j<n-1;j++)
		if(bo[0][j]>=bo[0][j-1]&&bo[0][j]>=bo[0][j+1]&&bo[0][j]>=bo[1][j])
			cout<<0<<" "<<j<<endl;
	if(bo[0][n-1]>=bo[0][n-2]&&bo[0][n-1]>=bo[1][n-1])
			cout<<0<<" "<<n-1<<endl;
	for(i=1;i<m-1;i++){
		if(bo[i][0]>=bo[i-1][0]&&bo[i][0]>=bo[i+1][0]&&bo[i][0]>=bo[i][1])
			cout<<i<<" "<<0<<endl;
		for(j=1;j<n-1;j++)
			if(bo[i][j]>=bo[i-1][j]&&bo[i][j]>=bo[i+1][j]&&bo[i][j]>=bo[i][j-1]&&bo[i][j]>=bo[i][j+1])
				cout<<i<<" "<<j<<endl;
		if(bo[i][n-1]>=bo[i-1][n-1]&&bo[i][n-1]>=bo[i+1][n-1]&&bo[i][n-1]>=bo[i][n-2])
				cout<<i<<" "<<n-1<<endl;
	}
	if(bo[m-1][0]>=bo[m-1][1]&&bo[m-1][0]>=bo[m-2][0])
		cout<<m-1<<" "<<0<<endl;
	for(j=1;j<n-1;j++)
		if(bo[m-1][j]>=bo[m-1][j-1]&&bo[m-1][j]>=bo[m-1][j+1]&&bo[m-1][j]>=bo[m-2][j])
			cout<<m-1<<" "<<j<<endl;
	if(bo[m-1][n-1]>=bo[m-1][n-2]&&bo[m-1][n-1]>=bo[m-2][n-1])
		cout<<m-1<<" "<<n-1<<endl;
	return 0;
}