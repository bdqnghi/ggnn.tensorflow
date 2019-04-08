int zhi(int num[][100] , int n );
int main()
{
	int in , i , j , k , cal[100][100]={0};
	cin >> in ;
	for (k = 0 ; k < in ; k++)
	{
		for(i = 0 ; i < in ; i++)
			for(j = 0 ; j < in ; j++)
				cin >> cal[i][j];
				cout << zhi (cal , in) << endl;
	}
	return 0 ;
}
int zhi(int num[][100] , int n)
{
	int i , j , min[100] , sum = 0 , temp ;
	if ( n == 1 )	return 0 ;
	for(i = 0 ; i < n ; i++)
	{
		min[i] = num[i][0];
		for(j = 0 ; j < n ; j++)
			if(num[i][j] < min[i])	min[i] = num[i][j] ;
	}
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
			num[i][j] = num[i][j] - min[i] ;
	for(j = 0 ; j < n ; j++)
	{
		min[j] = num[0][j];
		for(i = 0 ; i < n ; i++)
			if(num[i][j] < min[j])	min[j] = num[i][j] ;
	}
	for(j = 0 ; j < n ; j++)
		for(i = 0 ; i < n ; i++)
			num[i][j] = num[i][j] - min[j] ;
	temp = num[1][1] ;
	for(i = 0 ; i < n ; i ++)
		for (j = 1 ; j < n ; j++)
			num[i][j] = num[i][j+1] ;
	for(j = 0 ; j < n ; j++)
		for (i = 1 ; i < n ; i++)
			num[i][j] = num[i+1][j];
	sum = zhi( num , n-1) + temp ;
	return sum ;
}