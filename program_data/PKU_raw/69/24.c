
int main()
{
	int a[250], b[250];
	int ia=0, ib=0;
	while (1) {
		char c = cin.get();
	if (c=='\n') break;
		a[ia++] = c-'0';
	}
	while (1) {
		char c = cin.get();
		if (c=='\n') break;
		b[ib++] = c-'0';
	}

	int ir;
	int addin=0;
	int result[255];
	for (ir=0; ir<ia || ir<ib; ir++) {
		int ta, tb;
		if (ir>=ia) ta = 0;
		else ta = a[ia-1-ir];
		if (ir>=ib) tb = 0;
		else tb = b[ib-1-ir];

		int tr = ta+tb+addin;
		addin = tr/10;
		tr %= 10;
		result[ir] = tr;
	}
	result[ir] = addin;

	while (ir>=0 && result[ir]==0) ir--;

	if (ir<0) cout << 0 << endl;
	else {
		for (int i=ir; i>=0; i--) 
			cout << result[i];
		cout << endl;
	}

	return 0;
}