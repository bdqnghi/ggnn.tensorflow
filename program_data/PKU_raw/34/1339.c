/* ????.cpp
 *  Created on: 2012-11-20
 *      Author: ??
 */
int ans(int n) {
	if (n == 1)
		return 0;
	if (n % 2 == 0) {
		cout << n << "/2=" << n / 2 << endl;
		return ans(n / 2);//??
	} else {
		cout << n << "*3+1=" << n * 3 + 1 << endl;
		return ans(n * 3 + 1);//??
	}
}
int main() {
	int n;
	cin >> n;//??
	ans(n);
	cout << "End";//??
	return 0;
}
