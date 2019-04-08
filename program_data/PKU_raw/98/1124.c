/*????
 *  Created on: 2012-12-10
 *      Author: ??
 */
int main() {
	int n, sum = 0;//?????????
	cin >> n;//??
	char a[40], *p = a;//??
	cin >> p;//???
	sum = strlen(p);
	cout << p;
	for (int i = 1; i < n; i++) {//?????
		cin >> p;//??
		sum += strlen(p);//??
		if (sum > 79) {//??
			cout << endl << p;
			sum = strlen(p);
		} else {//???
			cout << ' ' << p;
			sum++;
		}
	}
	return 0;
}
