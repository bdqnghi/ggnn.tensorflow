
int main() {
	int n, a[1000], b[1000];
	int i, j, al, ar, bl, br;
	while (cin >> n) {
		if (n == 0)
			break;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
			cin >> b[i];
		sort(a, &a[n]);
		sort(b, &b[n]);

		int total = 0;
		al = bl = 0;
		ar = br = n - 1;
		while (al <= ar) {
			if (a[al] > b[bl]) {
				total += 200;
				al++;
				bl++;
			} else if (a[ar] > b[br]) {
				total += 200;
				ar--;
				br--;
			} else {
				if (a[al] < b[br]) {
					total -= 200;
					al++;
					br--;
				} else {
					al++;
					br--;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}