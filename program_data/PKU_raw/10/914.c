

const int N = 1010 ;

int n, m, k ;
int q[N] ;
int f[N] ;

int main ()
{
	scanf ("%d", &n) ;
	for (int i = 1; i <= n; i ++ ) scanf ("%d", &q[i]) ;
	q[0] = 1000000000 ;
	for (int i =1; i <= n; i ++ )
		for (int j = 0; j < i; j++ )
			if (q[j] >= q[i])
				f[i] = max (f[i], f[j] + 1) ;
	int res = 0 ;
	for(int i = 1; i <= n ;i ++ ) res = max (res, f[i]) ;
	printf ("%d\n", res) ;
	return 0 ;
}
