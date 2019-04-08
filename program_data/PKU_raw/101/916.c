
int main() {
	int A, B, C;
	int c1, c2, c3;
	for (A = 0; A <= 2; A++)
		for (B = 0; B <= 2; B++)
			for (C = 0; C <= 2; C++)
				if (A != B && A != C && B != C) {
					c1 = (B > A) + (C == A);
					c2 = (A > B) + (A > C);
					c3 = (C > B) + (B > A);
					if (A + c1 == 2 && B + c2 == 2 && C + c3 == 2) {
						if (A > B && B > C)
							cout << "C" << "B" << "A";
						if (A > C && C > B)
							cout << "B" << "C" << "A";
						if (B > A && A > C)
							cout << "C" << "A" << "B";
						if (B > C && C > A)
							cout << "A" << "C" << "B";
						if (C > A && A > B)
							cout << "B" << "A" << "C";
						if (C > B && B > A)
							cout << "A" << "B" << "C";
					}
				}

		return 0;

}
