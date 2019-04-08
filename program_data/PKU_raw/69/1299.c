
char inputA[260], inputB[260];
int a[260] = {0}, b[260] = {0};

int main() {
	cin.getline(inputA, 260);
	cin.getline(inputB, 260);

	int alen = strlen(inputA), blen = strlen(inputB);
	for(int i = alen - 1, j = 0; i >= 0; i --, j ++)
		a[j] = inputA[i] - '0';
	for(int i = blen - 1, j = 0; i >= 0; i --, j ++)
		b[j] = inputB[i] - '0';

	int len = max(alen, blen);
	for(int i = 0; i < len; i ++) {
		b[i] += a[i];
		if(b[i] >= 10) {
			b[i] -= 10;
			b[i + 1] += 1;
		}
	}

	int index = 0;
	for(int i = 259; i >= 0; i--)
		if(b[i] > 0) {
			index = i;
			break;
		}

	for(int i = index; i >= 0; i --)
		cout << b[i];
	cout << endl;
	return 0;
}