int main()
{
	int A[13],X,B;
	char C[8][10];
	char c1,c2;
	int N,Sum = 0;
	cin >> N >> X >> B;
	Sum = ((N - 1) % 7) * 365 + ((N - 1) / 4 - (N - 1) / 100 + (N - 1) / 400);
	int S = B;
	if (N%100)
		if (N%4 == 0) A[2] = 29; else A[2] = 28;
	else if (N%400 == 0) A[2] = 29; else A[2] = 28;
	A[1] = A[3] = A[5] = A[7] = A[8] = A[10] = A[12] = 31;
	A[4] = A[6] = A[9] = A[11] = 30;
	for (int I = 1; I < X; I ++) S += A[I];
	Sum = (Sum + S) % 7;
	if ( Sum == 1 ) cout << "Mon." << endl;
	if ( Sum == 2 ) cout << "Tue." << endl;
	if ( Sum == 3 ) cout << "Wed." << endl;
	if ( Sum == 4 ) cout << "Thu." << endl;
	if ( Sum == 5 ) cout << "Fri." << endl;
	if ( Sum == 6 ) cout << "Sat." << endl;
	if ( Sum == 0 ) cout << "Sun." << endl;
}