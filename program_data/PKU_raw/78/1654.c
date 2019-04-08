/*
 * exam.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 *      ???
 */

int main() {
	int z, q, s, l;
	char a[5];

	//??????????
	for (z = 10; z <= 50; z = z + 10)
		for (q = 10; q <= 50; q = q + 10) {
			if (z == q)
				continue;
			for (s = 10; s <= 50; s = s + 10) {
				if (s == z || s == q)
					continue;
				for (l = 10; l <= 50; l = l + 10) {
					if (l == z || l == q || l == s)
						continue;
					if (z + q == s + l && z + l > s + q && z + s < q) {
						//????????
						a[z / 10] = 'z';
						a[q / 10] = 'q';
						a[s / 10] = 's';
						a[l / 10] = 'l';
						for (int i = 5; i >= 1; i--)
							if (a[i] == 'z' || a[i] == 'q' || a[i] == 's'
									|| a[i] == 'l')//?????????????
								cout << a[i] << " " << i * 10 << endl;
					}
				}
			}
		}
	return 0;
}
