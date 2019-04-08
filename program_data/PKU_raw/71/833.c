/*#include "iostream"
int main()
{
	int A[13],X,B;
	char C[8][10];
	char c1,c2;
	int N,Sum = 0;
	cin >> N >> X >> B;
	for (int I = 1; I < N; I ++)
	{
		if (I%100)
			if (I%4 == 0) Sum = (Sum + 366) % 7; else Sum = (Sum + 365) % 7;
		else if (I%400 == 0) Sum = (Sum + 366) % 7; else Sum = (Sum + 365) % 7;
	}
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
}*/

int main()
{
	int N,M,X,Y,A[31];
	cin >> N;
	for (int I = 1; I <= N; I ++)
	{
		cin >> M >> X >> Y;
		if (M%100)
			if (M%4 == 0) A[2] = 29; else A[2] = 28;
		else if (M%400 == 0) A[2] = 29; else A[2] = 28;
		A[1] = A[3] = A[5] = A[7] = A[8] = A[10] = A[12] = 31;
		A[4] = A[6] = A[9] = A[11] = 30;
		int S = 0,T;
		if (X > Y)
		{
			T = X; X = Y; Y = T;
		}
		for (int I = X; I < Y; I ++) S += A[I];
		if (S%7) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}