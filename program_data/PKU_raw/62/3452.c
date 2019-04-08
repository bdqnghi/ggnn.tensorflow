/*
 * extra.cpp
 * ???????
 *  Created on: 2012-11-21
 *      Author: ???
 */
int main() {
	int i;
	char str[100];
	cin.getline(str, 100);
	cout << str[0];
	for (i = 1; i < strlen(str) - 1; i++) {
		if (str[i] != ' ') {
			cout << str[i];
		} else if (str[i] == ' ' && str[i + 1] == ' ') {
			continue;
		} else if (str[i] == ' ' && str[i + 1] != ' ') {
			cout << ' ';
		}
	}
	cout << str[strlen(str) - 1];
	return 0;
}
