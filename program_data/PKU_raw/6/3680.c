int main()
{
	int num;
	cin>>num;
	while(num--){
		int a[100][100];
		int m,n;
		cin>>m>>n;
		int i,j;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int sum=0;
		for(i=0;i<m;i++){
			if(n==1){
				sum+=a[i][0];
			}
			else{
				sum+=a[i][0];
			    sum+=a[i][n-1];
			}
		}
		for(j=1;j<n-1;j++){
			if(m==1){
				sum+=a[0][j];
			}
			else{
				sum+=a[0][j];
			    sum+=a[m-1][j];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
