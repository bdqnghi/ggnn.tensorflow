int main() {
	int i, j, a = 0, lenth, max = 0;
	char come1[20000], leave1[20000];
	cin.getline(come1, 20000);
	cin.getline(leave1, 20000);
	lenth = strlen(come1);
	for (i = 0; i < lenth; i++)
		if (come1[i] == ',')
			a++;
	a++;
	cout << a << " ";
	int come[a], leave[a];
	int at[1000];
	come[0] = atoi(come1);
	a = 1;
	for (i = 0; i < lenth; i++) {
		if (come1[i] == ',') {
			come[a] = atoi(come1 + i + 1);
			a++;
		}
	}
	lenth = strlen(leave1);
	leave[0] = atoi(leave1);
	a = 1;
	for (i = 0; i < lenth; i++) {
		if (leave1[i] == ',') {
			leave[a] = atoi(leave1 + i + 1);
			a++;
		}
	}
	for (i = 0; i < 1000; i++)
		at[i] = 0;
	for (i = 0; i < a; i++) {
		for (j = come[i]; j < leave[i]; j++) {
			at[j]++;
		}
	}
	max = at[0];
	for (i = 1; i < 1000; i++) {
		if (at[i] > max) {
			max = at[i];
		}
	}
	cout << max << endl;
	return 0;
}
