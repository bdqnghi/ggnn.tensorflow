//********************************
//*?????3?5?7????   **
//*?????? 1300012861 **
//*???2013.9.26  **
//********************************
int main() 
{  
    int n, a, b, c; 
	cin >> n;
	a = (n % 3 == 0);
	b = (n % 5 == 0);
	c = (n % 7 == 0);
	if (a + b + c == 0)
		cout << "n" << endl;
	else
		if (a + b + c == 3)
			cout << "3 5 7" << endl;
		else
			if (a == 1 && b == 0 && c == 0)
				cout << "3" << endl;
			else
				if (a == 0 && b == 1 && c == 0)
					cout << "5" << endl;
				else
					if (a == 0 && b == 0 && c == 1)
						cout << "7" << endl;
					else
						if (a == 1 && b == 1 && c == 0)
							cout << "3 5" << endl;
						else
							if (a == 0 && b == 1 && c == 1)
								cout << "5 7" << endl;
							else
								cout << "3 7" << endl;
    return 0;                     
}