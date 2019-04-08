int main()
{
	int i ,j, n ;
	double old , hen[2] , test[20][2]={0} , NEW[20] ;
	cin >> n >> hen[0] >> hen[1] ;
	for (i = 0 ; i < n-1 ; i++)
		for (j = 0 ; j <= 1 ; j++)
			cin >> test[i][j] ;
	old = hen[1] / hen[0] ;
	for (i=0; i <n-1 ; i ++)
		NEW[i]=test[i][1]/test[i][0] ;
	for (i = 0 ; i < n-1 ; i++)
	{	if(old - NEW[i]>0.05 )	cout << "worse" <<endl;
		else if(NEW[i] - old>0.05 )	cout << "better" <<endl;
		else cout << "same" << endl ;
	}
	return 0 ;
}
