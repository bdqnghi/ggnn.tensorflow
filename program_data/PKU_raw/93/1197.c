//*****???????????*****
//*****?????            *****
//*****???2013.9.27        ****

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	if (n % 3 == 0)
		sum = sum +3;
	if (n % 5 == 0)
		sum = sum +5;
	if (n % 7 == 0)
		sum = sum +7;
	switch (sum)
	{
	    case 0: cout << "n" << endl; break;
		case 3: cout << 3 << endl; break;
		case 5: cout << 5 << endl; break;
		case 7: cout << 7 << endl; break;
		case 8: cout << "3 5" << endl; break;
		case 10: cout << "3 7" << endl; break;
		case 12: cout << "5 7" << endl; break;
		case 15: cout << "3 5 7" << endl; break;
		default: cout << "error" << endl; break;
	}
	return 0;
}
