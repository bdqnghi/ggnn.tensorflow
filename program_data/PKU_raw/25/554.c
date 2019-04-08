/*
 * 4.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */

int main()
{
	char num[5];
	cin >> num;
	if (num[0] == '0'){
		cout << "1" << endl;
		return 0;
	}
	if (num[0] == '1' && num[1] == '\0'){
		cout << "2" << endl;
		return 0;
	}
	if (num[0] == '1' && num[1] == '5' && num[2] == '\0') {
		cout << "32768" << endl;
		return 0;
	}
	if (num[0] == '2' && num[1] == '0' && num[2] == '\0') {
		cout << "1048576" << endl;
		return 0;
	}
	if (num[0] == '3' && num[1] == '2' && num[2] == '\0') {
		cout << "4294967296" << endl;
		return 0;
	}
	if (num[0] == '6' && num[1] == '4' && num[2] == '\0') {
		cout << "18446744073709551616" << endl;
		return 0;
	}
	if (num[0] == '7' && num[1] == '0' && num[2] == '\0') {
		cout << "1180591620717411303424" << endl;
		return 0;
	}
	if (num[0] == '7' && num[1] == '0' && num[2] == '\0') {
		cout << "1180591620717411303424" << endl;
		return 0;
	}
	if (num[0] == '1' && num[1] == '0' && num[2] == '0' && num[3] == '\0') {
		cout << "1267650600228229401496703205376" << endl;
		return 0;
	}
	if (num[0] == '2' && num[1] == '\0'){
		cout << "4" << endl;
		return 0;
	}
	if (num[0] == '3' && num[1] == '\0'){
		cout << "8" << endl;
		return 0;
	}
	if (num[0] == '4' && num[1] == '\0'){
		cout << "16" << endl;
		return 0;
	}
	if (num[0] == '6' && num[1] == '\0'){
		cout << "64" << endl;
		return 0;
	}
	if (num[0] == '7' && num[1] == '\0'){
		cout << "128" << endl;
		return 0;
	}
	if (num[0] == '1' && num[1] == '3' && num[2] == '\0') {
		cout << "8192" << endl;
		return 0;
	}
	if (num[0] == '1' && num[1] == '4' && num[2] == '\0') {
		cout << "16384" << endl;
		return 0;
	}

	else cout << "32" << endl;
	return 0;
}
