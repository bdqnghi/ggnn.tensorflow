

int main()
{
	int i , j , k , r , ren , max;
	int in[2000];
	int r1[2000] , r2[2000];
	char c;

	i = 0;
	while( 1 ){
		scanf( "%d" , &r1[i++] );
		c = getchar();
		if( c == ',' )
			continue;
		else
			break;
	}
	i = 0;
	while( 1 ){
		scanf( "%d" , &r2[i++] );
		c = getchar();
		if( c == ',' )
			continue;
		else
			break;
	}

	ren = i;

	memset( in , 0 , sizeof( in ) );

	for( i = 0 ; i < ren ; i++ ){
		for( j = r1[i] ; j < r2[i] ; j++ ){
			in[j]++;
		}
	}

	max = in[0] ;
	for( i = 1 ; i < 2000 ; i++ ){
		if( in[i] > max )
			max = in[i];
	}

	printf("%d %d\n" , ren , max );




	return 0;
}