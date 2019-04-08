const int maxsize = 26;
int maxnum(int *r, int n) {
	int ans = 1;
	int i, j, temp;
	int maxlen[maxsize];
	maxlen[0] = 1;
	for(i = 1; i < n; i++) {
		temp = 0;
		for(j = 0; j < i; j++) {
			if(r[j] >= r[i]) {
				if(maxlen[j] > temp)
					temp = maxlen[j];
			}
		}
		maxlen[i] = temp + 1;
		if(ans < maxlen[i])
			ans = maxlen[i];
	}
	return ans;
}
int main() {
	int i, k;
	int r[maxsize];
	scanf("%d", &k);
	for(i = 0; i < k; i++) 
		scanf("%d", r+i);
	printf("%d\n", maxnum(r, k));
	return 0;
}
