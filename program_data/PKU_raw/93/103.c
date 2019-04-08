

int main()
{
	int N; cin >> N;
	if (N % 105 == 0) { cout << "3 5 7" << endl; return 0;}
	if (N % 15 == 0) { cout << "3 5" << endl; return 0;}
	if (N % 21 == 0) { cout << "3 7" << endl; return 0;}
	if (N % 35 == 0) { cout << "5 7" << endl; return 0;}
	if (N % 3 == 0) { cout << "3" << endl; return 0;}
	if (N % 5 == 0) { cout << "5" << endl; return 0;}
	if (N % 7 == 0) { cout << "7" << endl; return 0;}
	cout << "n" << endl;
	return 0;
}
