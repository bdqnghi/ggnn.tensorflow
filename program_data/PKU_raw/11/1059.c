int main()
{
	int A[13],X,B;
	int N;
	cin >> N >> X >> B;
	if (N%100)
		if (N%4 == 0) A[2] = 29; else A[2] = 28;
	else if (N%400 == 0) A[2] = 29; else A[2] = 28;
	A[1] = A[3] = A[5] = A[7] = A[8] = A[10] = A[11] = 31;
	A[4] = A[6] = A[9] = A[11] = 30;
	int Ans = B;
	for (int I = 1; I < X; I ++) Ans += A[I];
	cout << Ans << endl;
}