
int mycmp(const void *e1, const void *e2) {
	return *((int*)e1) - *((int*)e2);
}

int main() {
	int tj[1002], qw[2002], *q, n, ans;
	while(cin >> n) {
		if (n == 0)
			break;
		ans = -99999;
		for (int i = 0; i < n; i++)
			cin >> tj[i];
		for (int i = 0; i < n; i++)
			cin >> qw[i];
		qsort(tj, n, sizeof(int), mycmp);
		qsort(qw, n, sizeof(int), mycmp);
		for (int i = 0; i < n; i++)
			qw[i + n] = qw[i];
		for (q = qw; q < qw + n; q++) {
			int tmp = 0;
			for (int i = 0; i < n; i++) {
				if(tj[i] > q[i])
					tmp ++;
				else if (tj[i] < q[i])
					tmp --;
			}
//			cout << qw[0] << "|" << qw[1] << endl;
//			cout << tmp << endl;
			if (tmp > ans) ans = tmp;
		}
		cout << 200 * ans << endl;
	}
	return 0;
}
