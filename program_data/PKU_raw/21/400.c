int main () {
	int n , i , j , order=0 , temp;
	double sum = 0 , Max = 0;
	int a[1000] ,b[1000];
	cin >> n ;
	for ( i = 1 ; i <= n ; i ++ ) {
		cin >> a[i] ;
		sum += a[i] ;
	}
	sum = (double)sum/n ;
	for(i = 1 ; i <= n ; i ++ )
		Max = max(Max , (abs)(sum-a[i])) ;
	for ( i = 1 ; i <= n ; i ++ ) {
		if ( Max == (abs(sum-a[i]))) {
			b[order]=i;
			order++;
		}
	}
	for ( i = order-1 ; i >=0 ; i -- ) {
		for ( j = 0 ; j < i ; j ++ ) {
			if ( a[b[j]] > a[b[j+1]] ) {
				temp = a[b[j]] ;
				a[b[j]] = a[b[j+1]] ;
				a[b[j+1]] = temp ;
			}
		}
	}
	for ( i = 0 ; i < order ; i ++ ) {
		cout << a[b[i]] ;
		if ( i != order-1 )
			cout << ",";
	}
}