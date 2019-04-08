//********************************
//*?????3?5?7????   **
//*?????? 1300012855 **
//*???2013.9.26  **
//********************************


int main(void)
{
	int integer; // ????
	int situation = 0; // ?????????0
	cin >> integer;
	
// ??????????????????????????	
	if (integer % 3 == 0)
		situation += 3;
	if (integer % 5 == 0)
		situation += 5;
	if (integer % 7 == 0)
		situation += 7;
	switch (situation)
	{
	case 0:
		cout << 'n' << endl;
		break;
	case 3:
		cout << '3' << endl;
		break;
	case 5:
		cout << '5' << endl;
		break;
	case 7:
		cout << '7' << endl;
		break;
	case 8:
		cout << "3 5" << endl;
		break;	
	case 10:
		cout << "3 7" << endl;
		break;
	case 12:
		cout << "5 7" << endl;
		break;
	case 15:
		cout << "3 5 7" << endl;
		break;
	default:
		break;	
	}
	return 0;
} 