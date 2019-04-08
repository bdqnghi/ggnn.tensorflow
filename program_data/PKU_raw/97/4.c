

int main( int argc, char* argv[] ){
	int money = 0;
	int amount = 0;
	int value = 0, i, unit[max] = {0};

	unit[0] = 100;
	unit[1] = 50;
	unit[2] = 20;
	unit[3] = 10;
	unit[4] = 5;
	unit[5] = 1;

	scanf( "%d", &money );
	
	for ( i = 0; i < max; i++ ){
		value = money / unit[i];
		printf( "%d\n", value );
		money = money - value * unit[i];
	}
	
	return 0;
}