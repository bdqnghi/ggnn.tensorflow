
int put(int M, int N)                                   //???M?????N???????
{
	if ( N == 1 )                                       //??????????1               
		return 1;
	if ( M < N )                                        //M<N, ????????N-1?????
		return put( M, N - 1 );
	if ( M >= N )
		return put( M, N - 1 ) + put ( M - N, N );      //M>=N,???????????????  
}

int main ()                                              //???
{
	int t, M, N, i;
	cin >> t;                                            //t???  
	for ( i = 0; i < t; i ++ )                           
	{
		cin >> M >> N;
		cout << put( M, N ) << endl;
	}
	return 0;
}                                                         //?????
