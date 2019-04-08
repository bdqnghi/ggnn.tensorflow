
int main( int argc, char* argv[] ){
	int group = 0, i, j;
	int amount = 0;
	double * num;
	double ave = 0;
	double dev = 0;

	scanf( "%d", &group );

	for ( i = 0; i < group; i++ ){
		scanf( "%d", &amount );
		num = (double*) malloc( amount * sizeof(double) );
		for ( j = 0; j < amount; j++ ){
			scanf( "%lf", num + j );
			ave += num[j];
		}
		ave = ave / amount;
		for ( j = 0; j < amount; j++ ){
			dev += (num[j] - ave) * (num[j] - ave);
		}
		dev = sqrt(dev / amount);
		printf( "%.5lf\n", dev );
		dev = 0;
		ave = 0;
		free( num );
	}
	
	return 0;
}