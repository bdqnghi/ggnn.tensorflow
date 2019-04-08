/*
 * ???.cpp
 *
 *  Created on: 2012-11-1
 *      Author: ??
 */
int main() {
	int a, b, c;
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			if (b == a)
				continue;
			for (c = 0; c < 3; c++) {
				if (c == a || c == b)
					continue;//???????2??????0???
				if ((((b > a) + (c == a)) == (2 - a)) && (((a > b) + (a > c))
						== (2 - b)) && (((c > b) + (c > a)) == (2 - c))) {//????
					if (a == 0)
						cout << 'A';
					if (b == 0)
						cout << 'B';
					if (c == 0)
						cout << 'C';
					if (a == 1)
						cout << 'A';
					if (b == 1)
						cout << 'B';
					if (c == 1)
						cout << 'C';
					if (a == 2)
						cout << 'A';
					if (b == 2)
						cout << 'B';
					if (c == 2)
						cout << 'C';//???????
				}
			}
		}
	}
	return 0;
}
