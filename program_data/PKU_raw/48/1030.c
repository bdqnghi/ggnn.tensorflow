int  xi[11][11]={0} , jun[11][11] ={0} ;
int i , j ;
void fanzhi(int t)
{
	if(t == 0)
		return ;
	int jun[11][11] = {0} ;
	for (i = 1 ; i <= 9 ; i ++)
	{
		for (j = 1 ; j <= 9 ; j ++)
		{
			jun[i-1][j-1] += xi[i][j] ;
			jun[i-1][j] += xi[i][j] ;
			jun[i-1][j+1] += xi[i][j] ;
			jun[i][j-1] += xi[i][j] ;
			jun[i][j+1] += xi[i][j] ;
			jun[i+1][j-1] += xi[i][j] ;
			jun[i+1][j] += xi[i][j] ;
			jun[i+1][j+1] += xi[i][j] ;
		}
	}
	for (i = 1 ; i <= 9 ; i ++)
	{
		for (j = 1 ; j <= 9 ; j ++)
			xi[i][j] = 2 * xi[i][j] +jun[i][j] ;
	}
	fanzhi(t-1) ;
}
int main ()
{
	int m , n ;
	cin >> m >> n ;
	xi[5][5] = m ;
	fanzhi(n) ;
	for (i = 1 ; i <= 9 ; i ++)
	{
		for (j = 1 ; j <= 9 ; j ++)
		{
			if(j>=2)
				cout <<' ' ;
			cout <<xi[i][j] ;
		}
		cout <<endl ;
	}
	return 0 ;
}

