/*
 * bifanliang.cpp
 *
 *  Created on: 2010-11-17
 *      Author: Administrator
 *      ???????
 */
int main() {
	int A, B, C, As, Bs, Cs;
	for (A = 0; A <= 2; A++)
		for (B = 0; B <= 2; B++)
			for (C = 0; C <= 2; C++) {

				As = (B > A) + (A == C);
				Bs = (A > B) + (A > C);
				Cs = (C > B) + (B > A);
				if ((A + As == 2) && (B + Bs == 2) && (C + Cs == 2)) {
					if ((A < B) && (B < C))
						cout << "ABC" << endl;
					else if ((A < C) && (C < B))
						cout << "ACB" << endl;
					else if ((B < A) && (A < C))
						cout << "BAC" << endl;
					else if ((B < C) && (C < A))
						cout << "BCA" << endl;
					else if ((C < B) && (B < A))
						cout << "CBA" << endl;
					else if ((C < A) && (A < B))
						cout << "CAB" << endl;
				}
			}
	return 0;
}
