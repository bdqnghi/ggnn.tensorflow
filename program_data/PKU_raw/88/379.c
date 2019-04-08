int main()
{
	char num[40] , temp[40][40];
	int i , j , L;
	int S = 0 , Order = 0;
	cin.getline(num,40) ;
	L = strlen(num) ;
	for ( i = 0 ; i < L ; i ++ ) {
		if ( ( num[i] > '9' ) || ( num[i] < '0' ) ) {
			Order ++ ;
			for ( j = S ; j < i ; j++){
				temp[Order][j-S] = num[j] ;
			}
			temp[Order][j-S] = '\0' ;
			for ( j = i+1 ; j <= L ; j ++ ) {
				if ( ( num[j] <= '9' ) && ( num[j] >= '0' ) )  {
					S = j ;
					i = j-1 ;
					break ;
				}
				else if(num[j]=='\0')
					i=L-1;
			}
		}
	}
	if((num[L-1]<='9')&&(num[L-1]>='0')){
		Order ++ ;
		for(i=S ; i<L ; i++)
			temp[Order][i-S]=num[i];
		temp[Order][i-S]='\0';
	}
	for ( i = 1 ; i <= Order ; i ++ ) {
		cout << temp[i] ;
		if ( i != Order )
			cout << endl ;
	}
	return 0 ;
}