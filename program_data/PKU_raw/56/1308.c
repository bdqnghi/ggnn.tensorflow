
int main( int argc, char* argv[] ){
	char str[5];
	int i, count;

	scanf( "%s", str );

	count = strlen(str);
	for ( i = count - 1; i >= 0; i-- ){
		printf( "%c", str[i] );
	}
	
	return 0;

}