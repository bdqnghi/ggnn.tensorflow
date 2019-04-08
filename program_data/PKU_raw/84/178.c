


int main()
{
	int A[100 + 10], N;
	cin >> N;
	for (int i = 0; i < N; i ++)
		cin >> A[i];
	sort(A, A + N);
	cout << A[N - 1] << endl << A[N - 2] << endl;
	return 0;
}

