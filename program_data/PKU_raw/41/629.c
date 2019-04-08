

int main() {
	int A = 0, B = 0, C = 0, D = 0, E = 0;  // to store the rank of each company
	int words[6] = {0};   // to store if the company make a right prediction
	for(A = 1; A < 6; A ++)         // enum all the conditions
		for(B = 1; B < 6; B++) {
			if(A == B) continue; 
			for(C = 1; C < 6; C++) {
				if(C == A || C == B) continue; 
				for(D = 1; D < 6; D++) {
					if(D == A || D == B || D == C) continue;
					E = 15 - A - B - C - D;
					words[A] = (E == 1);      // if the prediction is right words[i] = 1, if it is wrong words[i] = 0
					words[B] = (B == 2);
					words[C] = (A == 5);
					words[D] = (C != 1);
					words[E] = (D == 1);
					if(words[1] == 1 && words[2] == 1 && words[3] == 0 && words[4] == 0 && words[5] == 0 && E != 2 && E != 3) {
						cout << A << ' ' << B << ' ' << C  << ' ' << D << ' '<< E << endl;
					}
				}
			}
		}
	getchar();
	getchar();
	return 0;
}