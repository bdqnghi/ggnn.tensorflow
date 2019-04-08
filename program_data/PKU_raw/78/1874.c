/*
 * 12.10.26.cpp
 *  Created on: 2012-10-26
 *  Author: ???
 *  ??:???
 */
int main() {
	int w[5], z, q, s, l, i, j, t;
	char n[5], k;
	for (z = 1; z <= 5; z++)
		for (q = 1; q <= 5; q++)
			for (s = 1; s <= 5; s++)
				for (l = 1; l <= 5; l++)
					if (z + q == s + l && z + l > s + q && z + s < q) {
						w[1] = z;
						w[2] = q;
						w[3] = s;
						w[4] = l;
						n[1] = 'z';
						n[2] = 'q';
						n[3] = 's';
						n[4] = 'l';
						for (i = 1; i <= 4; i++)
							for (j = i + 1; j <= 4; j++) {
								if (w[i] < w[j]) {
									t = w[i];
									w[i] = w[j];
									w[j] = t;
									k = n[i];
									n[i] = n[j];
									n[j] = k;
								}
							}
						for (i = 1; i <= 4; i++)
									cout << n[i] << ' ' << w[i] * 10 << endl;
					}
	return 0;
}