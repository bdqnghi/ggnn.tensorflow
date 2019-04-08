
int main( int argc, char* argv[] ){
	int count, sentry = 0;
	int * values;
	int i, sum = 0;
	double ave, temp, distance = 0;
	int * mid;

	scanf ( " %d ", &count );
	values = ( int * )malloc( count * sizeof(int) );
	mid = ( int * )malloc( count * sizeof(int) );
	for ( i = 0; i < count; i++ ){
		scanf ( "%d", (values + i) );
		sum += *( values + i );
	}
	
	ave = 1.0 * sum / count;
	
	for ( i = 0; i < count; i++ ){
		temp = fabs( 1.0 * values[i] - ave );
		if ( temp > distance ){
			distance = temp;
			mid[0] = values[i];
			sentry = 0;
		}
		else if ( temp == distance ){
			sentry++;
			mid[sentry] = values[i];
		}
	}

	
	printf( "%d", mid[0] );


	for ( i = 1; i <= sentry; i++ ){
		printf( ",%d", mid[i]);
	}
	return 0;
}
