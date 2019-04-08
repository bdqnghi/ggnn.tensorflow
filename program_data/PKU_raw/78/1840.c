/*???
 ???    1200012876
 2012?10?25?9:44:36      */
int main() {
	int Z, Q, S, L; //??????Z?Q?S?L
	for (Z = 10; Z <= 50; Z += 10) { //Z,Q,S,L???10???50
		for (Q = 10; Q <= 50; Q += 10) {
			if (Z == Q)
				continue; //Z?Q?????
			for (S = 10; S <= 50; S += 10) {
				if (S == Z || S == Q)
					continue;//S?Z?Q?????
				for (L = 10; L <= 50; L += 10) {
					if (L == Z || L == S || L == Q)
						continue;//L?Z?Q?S?????
					if (((Z + Q) == (S + L)) + ((Z + L) > (Q + S)) + ((Z + S)
							< Q) == 3) {//????????
						for (int i = 50; i > 0; i -= 10) {//????????
							if (i == Z)
								cout << "z " << Z << endl;
							if (i == Q)
								cout << "q " << Q << endl;
							if (i == S)
								cout << "s " << S << endl;
							if (i == L)
								cout << "l " << L << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}//????
