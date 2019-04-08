int X, Y, TX, TY;
int A[256],B[256];
int main()
{
	cin >> X >> Y;
	A[TX = 1] = X;
	B[TY = 1] = Y;
	while (A[TX] > 1)
	{
		A[TX + 1] = A[TX] / 2;
		TX ++;
	}
	while (B[TY] > 1)
	{
		B[TY + 1] = B[TY] / 2;
		TY ++;
	}
	while ((A[TX] == B[TY]) && (TX > 0) && (TY > 0))
	{
		TX --;TY --;
	}
	cout << A[TX + 1] << endl;
}