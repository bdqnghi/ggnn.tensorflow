int main() {
		int a, b, ten = 0;
	char num[1000];
	char num1[1000];
	cin >> a >> num >> b;
	for ( int i = 0; i < strlen(num); i ++ ) {//??????????????
		if ( num[i] >= (int)'A' && num[i] <= (int)'Z')
			num[i] += 32;
	}
	for ( int i = 0; i < strlen(num); i ++ ) { //????????????
		if ( num[i] >= (int)'a' && num[i] <= (int)'z')
			ten += ( (int)num[i] - 87 ) * pow( (double)a , (double)strlen(num) - 1 - i) ;
		else if ( num[i] >= (int)'1' && num[i] <= (int)'9')
			ten += ( (int)num[i] - 48 ) * pow( (double)a , (double)strlen(num) - 1 - i) ;
	}
	if ( ten == 0 ) cout << 0; //????? ??0
	else {
		int j = 0;
		for ( ; ; ){  //?????????b???
		if ( ten == 0 )  break;
		if ( ten % b < 10 ) num1[j] = (char)(ten % b + 48);
		else num1[j] = (char)(ten % b + 55 );
		ten = ten / b;
		j ++;
	}
	for ( int i = j - 1; i >= 0; i -- ) {
		cout << num1[i];       //??
	}
	}
	return 0;
}

