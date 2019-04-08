//********************************
//*?????? 1300012733 **
//*???2013?11?29?
//********************************
//????
int N,M;
int c = 0;
int plate[11] = {0};
//????????????
void Put( int k, int num )
{
	if(( k == N )&&( num >= plate[ N-1 ] ))
	{
		c++;
		return;
	}
	for( int i = plate[ k-1 ]; i <= num; i++ )
	{
		plate[ k ] = i;
		Put( k+1, num-i );
	}
}
int main()
{
	int t;
	cin >> t;
	for( int i = 1; i <= t; i++ )
	{
		cin >> M >> N;
		c = 0;
		//????
		Put( 1 , M );
		cout << c << endl;
	}
	return 0;
}