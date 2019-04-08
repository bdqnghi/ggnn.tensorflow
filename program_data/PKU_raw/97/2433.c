int main()
{
	int bill, count = 0;
	cin >> bill;
	while (bill > 0)
	{
		cout << bill / 100 << endl;
		bill -= bill / 100 * 100;
		cout << bill / 50 << endl;
		bill -= bill / 50 * 50;
		cout << bill / 20 << endl;
		bill -= bill / 20 * 20;
		cout << bill / 10 << endl;
		bill -= bill / 10 * 10;
		cout << bill / 5 << endl;
		bill -= bill / 5  * 5 ;
		cout << bill  << endl;
		bill -= bill;
	}
	return 0;
}