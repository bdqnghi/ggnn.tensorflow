

int main( int argc, char* argv[] ){
	int amount = 0, i;
	double age[max] = {0}, sum = 0;
	int year = 0;

	scanf( "%d", &amount );

	for ( i = 0; i < max; i++ ){
		age[i] = 0;
	}
	
	for ( i = 0; i < amount; i++ ){
		scanf( "%d", &year );
		
		if ( year <= 18 ){
			age[0]++;
		}
		else if ( year <= 35 && year >= 19 ){
			age[1]++;
		}
		else if ( year <= 60 && year >= 36 ){
			age[2]++;
		}
		else{
			age[3]++;
		}
	}
	
	for ( i = 0; i < max; i++ ){
		sum += age[i];
	}
	for ( i = 0; i < max; i++ ){
		age[i] = age[i] / sum * 100;
	}
	printf("1-18: %.2lf%%\n", age[0]);
	printf("19-35: %.2lf%%\n", age[1]);
	printf("36-60: %.2lf%%\n", age[2]);
	printf("60??: %.2lf%%\n", age[3]);

	return 0;
}