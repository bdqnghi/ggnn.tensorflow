
int n , k;
int a[100009] ;

int main () {
	cin >> n ;
	for (int i = 1 ; i <= n ; ++i) {
		cin >> a[i] ;
	}
	cin >> k ;
	
	for (int i = 1 ; i <= n ; ++i) {
		if (a[i] == k) {
			memmove (&a[i] , &a[i+1] , (n-- - i) * sizeof (*a)) ;
			--i ;
		}
	}
	
	for (int i = 1 ; i <= n ; ++i) {
		cout << a[i] << (i == n ? '\n' : ' ') ;
	}
}
