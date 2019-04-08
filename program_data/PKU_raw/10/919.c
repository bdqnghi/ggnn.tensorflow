
int n;
int a[29] = {~0U>>1}, f[29] = {0};
int ans = 0;

int main () {
    scanf ("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf ("%d", &a[i]);
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (a[i] <= a[j] && f[i] < f[j]+1) {
				f[i] = f[j]+1;
			}
		}
		
		if (f[i] > ans) {
			ans = f[i];
		}
	}
	
	printf ("%d\n", ans);
	return 0;
}
