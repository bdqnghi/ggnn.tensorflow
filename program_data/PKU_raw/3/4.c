
int main( int argc, char* argv[] ){
	int len, sum, i, j;
	int * set;
	int value = 0;

	scanf( "%d%d", &len, &sum );
	set = ( int* )malloc( len * sizeof(int) );
	for ( i = 0; i < len; i++ ){
		scanf( "%d", set + i );
	}
	for ( i = 0; i < len; i++ ){
		value = sum - set[i];
		for ( j = i + 1; j < len; j++ ){
			if ( value == set[j] ){
				printf("yes\n");
				return 0;
			}
		}
	}
	printf("no\n");
	return 0;
}