/*
 * ??????.cpp
 *
 *  Created on: 2011-1-8
 *      Author: angel
 */

int main() {
	int i = 0,j=0;

	char s[101] = { 0 };
	while (cin >> s) {
		int a = 0, b = 0;
	cout << s << endl;
	int flag[101] = { 0 };
	for (i = 0; i <= strlen(s) - 1; i++) {
		if (s[i] == '(')
			a++;
		if (s[i] == ')') {
			a--;
			if (a < 0) {
				a = 0;
				flag[i] = -1;
			}
		}
	}
	for (i = strlen(s) - 1; i >= 0; i--) {
		if (s[i] == ')')
			b++;
		if (s[i] == '(') {
			b--;
			if (b < 0) {
				b = 0;
				flag[i] = 1;
			}
		}
	}
	for (i=0;i<strlen(s);i++)
	{if (flag[i]!=0) break;}
	for (j = strlen(s) - 1; j >= 0; j--) {
		if (flag[j]!=0) break;
	}
	for (i = i; i <=j; i++) {
		if (flag[i] == 1)
			cout << "$";
		else if (flag[i] == 0)
			cout << " ";
		else if (flag[i] == -1)
			cout << "?";

	}	cout<<endl;}
	return 0;

}
