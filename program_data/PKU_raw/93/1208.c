//********************************
//*?????3?5?7????   **
//*?????? 1300012757 **
//*???2013.9.25  **
//********************************
int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
		cout << "3 5 7" << endl;
	else if (n % 3 != 0 && n % 5 == 0 && n % 7 == 0)
		cout << "5 7" << endl;
	else if (n % 3 == 0 && n % 5 != 0 && n % 7 == 0)
		cout << "3 7" << endl;
	else if (n % 3 == 0 && n % 5 == 0 && n % 7 != 0)
		cout << "3 5" << endl;
	else if (n % 3 == 0)
		cout << "3" <<endl;
	else if (n % 5 == 0)
		cout << "5" << endl;
	else if (n % 7 == 0)
		cout << "7" <<endl;
	else cout << 'n' <<endl;
	return 0;
}
	