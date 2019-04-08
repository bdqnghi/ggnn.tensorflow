int main()
{
	long int y;
	int	m,d;
	cin>>y>>m>>d;
	int t,q,k,sum,f;
	t = ( y - 1 ) / 400;
	q = ( y - 1 ) % 400 / 100;
	k = ( y - 1 ) % 100;
    sum =  q * ( 100 * 365 + 24 ) + k * 365 + k / 4;
	int zz[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	if ( y % 4 != 0 || ( y % 4 == 0 && y % 100 == 0 && y % 400 != 0 ))
		sum+=zz[m-1]+d;
	else
	{
		if ( m <= 2 )
			sum+=zz[m-1]+d;
		else
			sum+=zz[m-1]+d+1;
	}
	f = ( sum - 1 ) % 7;
	    if ( f == 0) cout<<"Mon."<<endl;
		if ( f == 1) cout<<"Tue."<<endl;
		if ( f == 2) cout<<"Wed."<<endl;
		if ( f == 3) cout<<"Thu."<<endl;
		if ( f == 4) cout<<"Fri."<<endl;
		if ( f == 5) cout<<"Sat."<<endl;
		if ( f == 6) cout<<"Sun."<<endl;
}
