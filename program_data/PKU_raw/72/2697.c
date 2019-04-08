int main(){
	int m,n,i,j;
	cin>>m>>n;
	int h[m+2][n+2];
	memset(h,0,sizeof(h));
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			cin>>h[i][j];
	for(i=1;i<m+1;i++)
		for(j=1;j<1+n;j++)
		{
			if((h[i][j]>=h[i][j+1])&&(h[i][j]>=h[i][j-1])&&(h[i][j]>=h[i+1][j])&&(h[i][j]>=h[i-1][j]))
				cout<<i-1<<" "<<j-1<<endl;
		}
	return 0;
}