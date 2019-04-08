/*
 * paiduiyouxi.cpp
 *
 *  Created on: 2010-12-30
 *      Author: qaj
 */
int main() {
	char ch[20000];
	cin >> ch;
	int l = strlen(ch);
	int num[20000];
	for (int i = 0; i < l; i++)
		num[i] = i;
	int n = l;
	char boy, girl;
	boy = ch[0];
	for (int i = 1; i < l; i++) {
		if (ch[i] != boy) {
			girl = ch[i];
			break;
		}
	}
	for (int k = 0; k < l / 2; k++)
		for (int i = 0; i < n; i++) {
			if ((ch[i] == boy) && (ch[i + 1] == girl) || (ch[i] == girl)
					&& (ch[i + 1] == boy)) {
				cout << num[i] << ' ' << num[i + 1] << endl;
				n = n - 2;
				for (int j = i; j < n; j++) {
					ch[j] = ch[j + 2];
					num[j] = num[j + 2];
				}
				break;
			}
		}
	return 0;
}