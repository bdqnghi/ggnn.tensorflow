/*
 * moban.cpp
 *?? - ????????????????????????
 *  Created on: 2012-11-29
 *      Author: ???
 */
int a[500], b[500], numbera, numberb, i, j, p;
void input();//????
void order();
void stract();
void output();
int main() {
	input();//????
	order();
	stract();
	output();
	return 0;
}
void input() {   //???????????????????????
	cin >> numbera >> numberb;
	for (i = 0; i < numbera; i++)
		cin >> a[i];
	for (i = 0; i < numberb; i++)
		cin >> b[i];
}
void order() {  //???????????????
	for (i = 0; i < numbera - 1; i++)
		for (j = numbera - 1; j > i; j--)
			if (a[j] < a[j - 1]) {
				p = a[j];
				a[j] = a[j - 1];
				a[j - 1] = p;
			}
	for (i = 0; i < numberb - 1; i++)
		for (j = numberb - 1; j > i; j--)
			if (b[j] < b[j - 1]) {
				p = b[j];
				b[j] = b[j - 1];
				b[j - 1] = p;
			}
}
void stract() {  //??????????????
	for (i = numbera; i < numbera + numberb; i++)
		a[i] = b[i - numbera];
}
void output() {  //??????????????
	cout << a[0];
	for (i = 1; i < numbera + numberb; i++)
		cout << " " << a[i];
}
