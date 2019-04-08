/*
 * weight.cpp
 *???
 *  Created on: 2012-11-5
 *      Author: ???
 */
int main() {
	int z, q, s, l, a, b, c, d, i, j, w[4];               //???????????
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			if (a == b)
				continue;                                 //????????????????
			for (c = 1; c <= 5; c++) {
				if (a == c || b == c)
					continue;
				for (d = 1; d <= 5; d++) {
					if (a == d || b == d || c == d)
						continue;
					w[1] = ((a + b) == (c + d));
					w[2] = ((a + d) > (c + b));
					w[3] = ((a + c) < b);
					if ((w[1] + w[2] + w[3]) == 3) {       //??????????????????
						z = a * 10;
						q = b * 10;
						s = c * 10;
						l = d * 10;
						break;
					}
				}
			}
		}
	}
	char rank[5] = { 'z', 'q', 's', 'l' }, temp1;           //????????
	int m[5] = { z, q, s, l }, temp2;
	for (j = 0; j < 3; j++)
		for (i = 0; i <= (2 - j); i++) {
			if (m[i] < m[i + 1]) {                          //????????????????????
				temp1 = rank[i];
				rank[i] = rank[i + 1];
				rank[i + 1] = temp1;
				temp2 = m[i];
				m[i] = m[i + 1];
				m[i + 1] = temp2;
			}
		}

	for (i = 0; i < 4; i++) {                                //??????????
		cout << rank[i] << ' ' << m[i] << endl;
	}
	return 0;
}
