//????

char out[100];
int ct, sig;

int main()
{
	char x;
	while ( (x = cin.get()) != '\n' ) {
		if ( x >= '0' && x <= '9' ) {
			out[ct] = x;
			++ct;
			sig = 1;
		}
		else if ( sig ) {
			out[ct] = '\n';
			++ct;
			sig = 0;
		}
		else continue;
	}

	for ( int i = 0; i != ct; ++i ) cout << out[i];
	if ( out[ct - 1] != '\n' ) cout << endl;

	return 0;
}