

int main( int argc, char* argv[] ){
	char str[max], c;
	int size = 0, i, j;

	scanf( "%d", &size );

	for ( i = 0; i < size; i++ ){
		scanf( "%s", str );
		c = str[0];
		j = 0;
		while ( c != '\0'){
			switch (c){
				case 'A':
					printf("T");
					break;
				case 'T':
					printf("A");
					break;
				case 'G':
					printf("C");
					break;
				case 'C':
					printf("G");
					break;
			}//switch
			j++;
			c = str[j];
		}//while
		printf("\n");
	}//for

	return 0;
} 