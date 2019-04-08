int main()
{
	int n ;
	int a[111][111] , sum ;
	int i , j , k , l,Min;
	cin >> n ;
	for ( i = 1 ; i <= n ; i ++ ) {
		sum = 0;

		for ( j = 1 ; j <= n ; j ++ ) {
			for ( k = 1 ; k <= n ; k ++ ) {
				cin >> a[j][k] ;
			}
		}

		for(j=1; j<n; j++){
			Min=10000;
			for(l=j+1; l<=n; l++){
				Min=min(Min,a[1][l]);
			}
			Min=min(Min,a[1][1]);
			for(l=j+1; l<=n; l++)
				a[1][l] = a[1][l] - Min;
			a[1][1] = a[1][1] - Min;
			for(k=j+1; k<=n; k++){
				Min=10000;
				for(l=j+1; l<=n; l++){
					Min=min(Min,a[k][l]);
				}
				Min=min(Min,a[k][1]);
				for(l=j+1; l<=n; l++){
					a[k][l] = a[k][l] - Min;
				}
				a[k][1] = a[k][1] - Min;
			}
			Min=10000;
			for(l=j+1; l<=n; l++){
				Min=min(Min,a[l][1]);
			}
			Min=min(Min,a[1][1]);
			for(l=j+1; l<=n; l++){
				a[l][1] = a[l][1] - Min;
			}
			a[1][1] = a[1][1] - Min;
			for(k=j+1; k<=n; k++){
				Min=10000;
				for(l=j+1; l<=n; l++){
					Min=min(Min,a[l][k]);
				}
				Min=min(Min,a[1][k]);
				for(l=j+1; l<=n; l++){
					a[l][k] = a[l][k] - Min;
				}
				a[1][k] = a[1][k] - Min;
			}
			sum = sum + a[j+1][j+1];
		}
		cout<<sum<<endl;
	}

}
