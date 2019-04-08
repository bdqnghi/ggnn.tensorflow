
void swap(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

int main(void)
{
	int n, ts, qs, te, qe, i, j, ans;
	int t[1005], q[1005];

	while(1) {
		scanf("%d", &n);
		if (n == 0) break;
		for (i = 0; i < n; i++) scanf("%d", &t[i]);
		for (i = 0; i < n; i++) scanf("%d", &q[i]);
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++) {
				if (t[i] > t[j]) swap(&t[i], &t[j]);
				if (q[i] > q[j]) swap(&q[i], &q[j]);
			}
		ts = qs = 0;
		te = qe = n-1;
		ans = 0;
		for (i = 0; i < n; i++) {
			if (t[te] > q[qe]) {
				ans++;
				te--;
				qe--;
			}
			else if(t[te] < q[qe]) {
				ans--;
				te--;
				qs++;
			}
			else {
				if (t[ts] > q[qs]) {
					ans++;
					ts++;
					qs++;
				}
				else if (t[ts] < q[qs]) {
					ans--;
					te--;
					qs++;
				}
				else {
					if (q[qs] > t[te]) ans--;
					qs++;
					te--;
				}
			}
		}
		printf("%d\n", ans*200);
	}
		return 0;	
}