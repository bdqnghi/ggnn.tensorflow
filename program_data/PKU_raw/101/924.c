/*
 * 12.10.28.cpp
 *Created on: 2012-10-28
 *Author: ???
 *??:???
 */

int comp(int a, int b) {
	if (a > b)
		return 1;
	if (a == b)
		return 0;
	return -1;
}
int main() {
	int A, B, C, nA, nB, nC;
	char ret;
	for (A = 0; A <= 2; A++) {
		for (B = 0; B <= 2; B++) {
			for (C = 0; C <= 2; C++) {
				nA = (B > A) + (C == A);
				nB = (A > B) + (A > C);
				nC = (C > B) + (B > A);
				ret = true;
				if (comp(nA, nB) != comp(B, A))
					ret = false;
				if (comp(nA, nC) != comp(C, A))
					ret = false;
				if (comp(nC, nB) != comp(B, C))
					ret = false;
				if (ret == true) {
					if (A < B && A < C) {
						cout << 'A';
						if (B < C)
							cout << "BC";
						else
							cout << "CB";
					} else if (B < C) {
						cout << 'B';
						if (A < C)
							cout << "AC";
						else
							cout << "CA";
					} else
						cout << "CBA";
				}

			}
		}
	}
	return 0;
}