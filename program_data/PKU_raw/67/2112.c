/*???2011-12-30
 *??????
 *????09.cpp
 *????? - ??(4-9) ?????
 */


int main()
{
	int n = 0;
	double total = 0;
	double valid = 0;
	double cocktail = 0.0;
	cin >> n;
	cin >> total >> valid;
	cocktail = valid / total;
	for (int temp = 1; temp < n; temp++)
	{
		cin >> total >> valid;
		if ( (valid / total) > cocktail + 0.05 )
			cout << "better" << endl;
		else if ( (valid / total) < cocktail - 0.05 )
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}
