int main() {
	int n;
	int a[100001];
	int i, j, k;
	int g;
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	
	g = 0;
	for(i=0; i<n; i++) {
		if(a[i] == k) continue;
		
			if(g == 1) {
				printf(" %d", a[i]);
			} else {
				printf("%d", a[i]);
				g = 1;
			}
		
	}
	return 0;
}
