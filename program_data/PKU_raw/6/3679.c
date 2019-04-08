int main()
{
	const int max=100;
	int num;
	cin>>num;
	while(num--){
		int m,n;
		cin>>m>>n;
		int a[max][max];
		int i,j;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int sum=0;
		for(j=0;j<n;j++){
			if(m==1){
				sum+=a[0][j];
			}
			else{
				sum+=a[0][j];
				sum+=a[m-1][j];
			}
		}
		for(i=1;i<m-1;i++){
			if(n==1){
				sum+=a[i][0];
			}
			else{
				sum+=a[i][0];
				sum+=a[i][n-1];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}