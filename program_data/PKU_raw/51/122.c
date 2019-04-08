int main() {
	char s[600];
	int len;
	int i;
	int j;
	int n;
	int k;
	int max;
	int idx[1000];
	int count[1000] = {0};
	scanf("%d", &n);
	scanf("%s", s);
	len = strlen(s);
	k=0;
	for(i=0; i<=len-n; i++) {
		for(j=0; j<k; j++) {
			if(strncmp(s+i, s+idx[j], n) == 0) {
				count[j]++;
				break;
			}
		}
		if(j == k) {
			idx[k] = i;
			count[k] = 1;
			k++;
			count[k] = 0;
		}
	}
	max = -1;
	for(i=0; i<k; i++) {
		if(count[i] > max) {
			max = count[i];
		}
	}
	if(max <= 1) {
		printf("NO\n");
		return 0;
	}
	printf("%d\n", max);
	for(i=0; i<k; i++) {
		if(count[i] == max) {
			for(j=idx[i]; j<idx[i]+n; j++) {
				printf("%c", s[j]);
			}
			printf("\n");
			//printf("%s\n", s.substr(idx[i], n));
		}
	}
	return 0;
}
