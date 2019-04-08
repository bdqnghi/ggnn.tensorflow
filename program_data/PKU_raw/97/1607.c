int main()
{
	int	N;
	cin >> N;

	int	piao100 = 0;
	int	piao50 = 0;
	int	piao20 = 0;
	int	piao10 = 0;
	int	piao5 = 0;
	int	piao1 = 0;

	piao100 = (int) (N / 100);
	N = N - 100 * piao100;

	piao50 = (int)	(N / 50);
	N = N - 50 * piao50;

	piao20 = (int) (N / 20);
	N = N - 20 * piao20;

	piao10 = (int) (N / 10);
	N = N - 10 * piao10;

	piao5 = (int) (N / 5);
	N = N - 5 * piao5;

	piao1 = N;

	cout << piao100 << endl << piao50 << endl << piao20 << endl << piao10 << endl;
	cout << piao5 << endl << piao1 << endl;
	
	

return 0;
}
